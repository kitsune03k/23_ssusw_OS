#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
    int p;

    printf(1, "** parent ** pid : %d\n", getpid());

    printf(1, "1. (in parent) before fork\n");
    printf(1, "free pages : %d\n\n", getNumFreePages());

    p = fork();

    if(p < 0){ // fork error
        printf(1, "fork error\n");
    }
    else if(p > 0){ // parent process
        wait();
        
        printf(1, "3. (in parent) after termination of child\n");
        printf(1, "free pages : %d\n\n", getNumFreePages());
    }
    else{ // child process
        printf(1, "** child ** pid : %d\n", getpid());
        printf(1, "2. (in child) after fork\n");
        printf(1, "free pages : %d\n\n", getNumFreePages());
    }

    exit();
}

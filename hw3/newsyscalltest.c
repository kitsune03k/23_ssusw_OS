#include "types.h"
#include "stat.h"
#include "user.h"

int main (void){
    int pid, priority1, priority2;

    pid = getpid();
    printf(1, "current process's pid : %d\n", pid);

    priority1 = get_proc_priority(pid);
    printf(1, "before set priority of pid(%d) = %d\n", pid, priority1);

    set_proc_priority(pid, 10);
    priority2 = get_proc_priority(pid);
    printf(1, "after set priority of pid(%d) = %d\n", pid, priority2);

    exit();
}

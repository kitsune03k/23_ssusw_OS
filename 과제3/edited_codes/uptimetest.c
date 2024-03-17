#include "types.h"
#include "stat.h"
#include "user.h"

int main(void){
    int i = 0;

    int t_start = uptime();
    int t_end = t_start + 1000;
    while(i<t_end){
        i = uptime();
        if(i%100 == 0)
            printf(1, "i = %d\n", i);
    }

    exit();
}

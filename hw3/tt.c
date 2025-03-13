#define MAXCPROC 10
#define LASTPID (mainpid+MAXCPROC)

#include "types.h"
#include "stat.h"
#include "user.h"

int main (void) {
    //int mainpid = getpid();
    int p;
    for (int i = 0; i < MAXCPROC; i++) {
        p = fork();
        // child
        if (p == 0) {
            int cpid = getpid();

            set_proc_priority(cpid, i%10+1);

            int pri = get_proc_priority(cpid);
            printf(1,"child %d created with priority(%d)!\n", cpid, pri);

            int t_start = uptime();
            int t_end, t_elipsed;
            while(1){
                int newpri = get_proc_priority(cpid);
                if(newpri != pri){
                    t_end = uptime();
                    t_elipsed = t_end-t_start;
                    printf(1,"child %d priority changed from %d to %d in %d ticks\n", cpid, pri, newpri, t_elipsed);
                    t_start = t_end;
                }
                pri = newpri;
            }
        }
    }

    while(1); // parent never end
}

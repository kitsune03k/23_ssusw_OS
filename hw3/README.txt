****************************************
*     SSU OS hw03 - 20181755 KH Lee    *
****************************************

This project's goal is making improved s
cheduler. XV6's default scheduler is Rou
nd-Robin scheduler. A new scheduler shou
ld have a concept of 'priority', and sch
edule processes in order of priority, bu
t starvation must not happen.

1. NEW
These are user application that can test
each situation.
1-1. newsyscalltest.c
To test new syscalls.
1-2. uptimetest.c
To know the concept of ticks.
1-3. tt.c
To observe how new scheduler works.

2. EDIT
2-1. Makefile
Added files in NEW to make it executable
2-2. syscall.h
Added define macro about new syscalls;
SYS_get_proc_priority 22
SYS_set_proc_priority 23
SYS_get_proc_isconst  24
SYS_set_proc_isconst  25
2-3. syscall.c
Added four new syscalls to array of sysc
all functions.
2-4. usys.S
Added macro-applied line.
2-5. defs.h
Added original form of new syscalls.
2-6. proc.c
Added four new functions which are used
by syscalls, edit fork() and allocproc()
to handle new members of struct proc.
2-7. proc.h
Added concept of priority, isconst, runc
ount.
2-8. sysproc.c
Define a wrapper function for newly defi
ned functions in proc.c.
2-9. param.h
Make NCPU parameter from 8 to 1. This wi
ll help to observe starvation easier.
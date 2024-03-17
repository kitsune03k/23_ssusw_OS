****************************************
*     SSU OS hw02 - 20181755 KH Lee    *
****************************************

This project's goal is making new syscal
l called forknexec; which is combination
of existing two system calls: fork and e
xec.

The key is thinking about virtual memory
space. Managing memory well will help to
solve problem.

1. NEW
1-1. test.c
This is a user application that can test
newly defined syscall.

2. EDIT
2-1. Makefile
Added test.c so it can be execute.
2-2. syscall.h
Added define macro about 'SYS_forknexec'
- this will be used in syscall.c.
2-3. syscall.c
Added sys_forknexec to list of syscall f
unctions.
2-4. usys.S
Added macro-applied line.
2-5. defs.h
Added original form of forknexec.
2-6. proc.c
Define a function for new syscall. This 
was so hard work without knowledge of co
mputer organization.
2-7. sysfile.c.
Define a wrapper function for newly defi
ned function in proc.c.

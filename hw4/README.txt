****************************************
*     SSU OS hw04 - 20181755 KH Lee    *
****************************************

This project's goal is implement Copy-on
-Write in XV6. I/O is overhead!!

1. NEW
1-1. test.c
An user application for test CoW.

2. EDIT
2-1. Makefile
Added file in NEW to make it executable
2-2. syscall.h
#define SYS_getNumFreePages 22
2-3. syscall.c
Added new syscall to array of syscall f
unctions.
2-4. user.h
Added original form of new syscall.
2-5. usys.S
Added macro-applied line.
2-6. defs.h
Added original form of new syscall.
2-7. kalloc.c
uint num_free_pages;
uint pgrefcount[PHYSTOP >> PTXSHIFT];
Added concepts about page reference cou
nt, and number of free pages.
int getNumFreePages(void);
uint  get_refcount(uint pa);
void inc_refcount(uint pa);
void dec_refcount(uint pa);
Defined and edited multiple functions t
o handle new concepts.
2-8. vm.c
Edited copyuvm(), defined pagefault().
2-9. trap.c
Added case in switch to handle pagefaul
t.
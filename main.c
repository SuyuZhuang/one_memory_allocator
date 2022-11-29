#include <stdio.h>
#include <unistd.h>
#include "sys_call_sbrk.h"


int main() {
    size_t a;
    void *p1 = my_malloc(4 * sizeof(int));
    printf("p1=%p  brk=%p\n", p1, sbrk(0));
    void *p2 = my_malloc(5 * sizeof(int));
    printf("p2=%p brk=%p\n", p2, sbrk(0));
    void *p3 = my_malloc(5 * sizeof(int));
    printf("p3=%p brk=%p\n", p3, sbrk(0));
    my_free(p2);
    printf("free(p2) brk=%p\n", sbrk(0));
    void *p4 = my_malloc(5 * sizeof(int));
    printf("p4=%p brk=%p\n", p4, sbrk(0));
    brk();
    return 0;
}

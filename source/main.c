/*
 *  file main.c
 *  executable program
 * */

#include <CExtern.h>
#include <stdio.h>

int main()
{
    printf("nilai sebelum diubah: %d\n", fragment);
    fragment = 10;
    printf("nilai setelah diubah: %d\n", fragment);
    return 0;
}


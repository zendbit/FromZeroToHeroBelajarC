/*
 *  file main.c
 *  executable program
 * */

#include <stdio.h>
#include <CPragmaOnce.h>
#include <CPragmaOnce.h>

#define LIMIT 5
#undef LIMIT

#ifndef LIMIT
#define LIMIT 10
#endif

#define WIN 0
#define MACOS 1
#define LINUX 2
#define BSD 3

#define MAX(a, b) a > b ? a : b

int main()
{
    printf("check max value 4, 5: %d\n", MAX(40, 5));

#if defined WIN
    printf("%s\n", "WINDOW OS");
#endif
    printf("Nilai LIMIT %d\n", LIMIT);
    for(int i = 0; i < LIMIT; i++) {
        printf("%d\n", i);
    }
    return 0;
}


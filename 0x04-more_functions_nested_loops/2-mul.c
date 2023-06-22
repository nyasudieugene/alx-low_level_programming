// main.h
#ifndef MAIN_H
#define MAIN_H

int mul(int a, int b);

#endif /* MAIN_H */

// 2-main.c
#include "main.h"
#include <stdio.h>

int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return 0;
}

// 2-mul.c
int mul(int a, int b)
{
    return a * b;
}

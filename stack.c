//
// Created by falle on 2025/5/18.
//

#define MAXVAL 100
#include <stdio.h>
static int sp = 0;
static double val[MAXVAL];

void push(const double f) {
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error: stack full, can't push %g\n", f);
}

double pop(void) {
    if (sp > 0)
        return val[--sp];
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}


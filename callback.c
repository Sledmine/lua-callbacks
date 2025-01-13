#include <stdio.h>

void call(int n, void (*f)(void)) {
    printf("calling callback from C\n");
    for (int i = 0; i < n; i++) {
        f();
    }
}

void loop(int n) {
    for (int i = 0; i < n; i++) {
        /* prevent compiler optimizations from skipping loop entirely */
        __asm__("");
    }
}

void func(void) {
}

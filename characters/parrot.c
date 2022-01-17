// Write a program parrot.c that uses getchar() and putchar() to echo the user's input.

#include <stdio.h>

int main(void) {
    int c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    return 0;
}

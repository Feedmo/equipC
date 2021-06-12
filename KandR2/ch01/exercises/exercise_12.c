#include <stdio.h>

/**
 * print input one word per line
*/
#define OUT 0
#define IN 1

int main() {
    int ch, state;
    state = OUT;
    while ((ch = getchar()) != EOF) {
        if (ch == ' ' || ch == '\t' || ch == '\n') {
            if (state == IN) putchar('\n');
            state = OUT;
        } else {
            putchar(ch);
            state = IN;
        }
    }
    return 0;
}




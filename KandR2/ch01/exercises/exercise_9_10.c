#include <stdio.h>

void exercise_9_10() {
    int ch;
    while ((ch = getchar()) != EOF) {
        if (ch == ' ') {
            putchar(ch);
            while ((ch = getchar()) != EOF && ch == ' ')
                ;
            if (ch == EOF) return;
        }

        // Before
        // if (ch == '\t') {
        //     putchar('\\');
        //     putchar('t');
        // } else if (ch == '\b') {
        //     //...
        // } else {...}

        // After
        if (ch == '\t' || ch == '\b' || ch == '\\') {
            putchar('\\');
            if (ch == '\t') putchar('t');
            else if (ch == '\b') putchar('b');
            else putchar('\\');
        } else putchar(ch);
    }
}

int main() {
    exercise_9_10();
    return 0;
}
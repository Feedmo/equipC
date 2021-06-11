#include <stdio.h>

void exercise_9_10() {
    int ch;
    while ((ch = getchar()) != EOF) {
        if (ch == ' ') {
            putchar(ch);
            while ((ch = getchar()) == ' ');
        }
        if (ch == '\t') {
            putchar('\\');
            putchar('t');
        }
        else if (ch == '\b') {
            putchar('\\');
            putchar('b');
        }
        else if (ch ==  '\\') {
            putchar('\\');
            putchar('\\');
        }
        else putchar(ch);
    }
}

int main() {
    exercise_9_10();
    return 0;
}
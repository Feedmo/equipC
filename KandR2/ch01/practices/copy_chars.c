#include <stdio.h>

/**
 * read a character
 * while (character is not a end-of-file indicator)
 *      output the character just read
 *      read a character
*/

void solution_v1() {
    int c;
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}

void solution_v2() {
    int c;
    while ((c = getchar()) != EOF)
        putchar(c);
}

int main() {
    // solution_v1();
    solution_v2();
    return 0;
}


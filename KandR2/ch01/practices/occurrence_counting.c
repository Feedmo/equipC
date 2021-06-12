#include <stdio.h>

// count the number of occurences of each digit, of white space
// characters(blank, tab, newline), and of all other characters 
int main() {
    int i, ch, nwhite, nother;
    nwhite = nother = 0;
    int digits[10];
    for (i = 0; i < 10; ++i)
        digits[i] = 0;

    while ((ch = getchar()) != EOF) {
        if (ch == ' ' || ch == '\t' || ch == '\n')
            nwhite++;
        else if ('0' <= ch && ch <= '9')
            ++digits[ch-'0'];
        else
            nother++;
    }
    printf("digits=");
    for (i = 0; i < 10; i++)
        printf(" %d", digits[i]);
    printf(", white space= %d, others= %d\n", nwhite, nother);
    return 0;
}
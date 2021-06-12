#include <stdio.h>

/**
 * counts lines, words and characters, and a word is any sequence of 
 * characters that does not contain a blank, tab or newline.
*/
#define OUT 0
#define IN 1

int main() {
    int ch, nc, nl, nw, state;
    nc = nl = nw = 0;
    state = OUT;
    while ((ch = getchar()) != EOF) {
        ++nc;
        if (ch == '\n') ++nl;
        // 因为不考虑对空字符计数因此不用对state做判断，这也方便了else-if
        if (ch == ' ' || ch == '\t' || ch == '\n')
            state = OUT;
        else if (state == OUT) {
            ++nw;
            state = IN;
        }

        // 也可以先检测单词但会繁琐些
        // if (state == OUT && ch != ' ' && ch != '\t' && ch != '\n') {
        //     ++nw;
        //     state = IN;
        // } else if (state == IN && (ch == ' ' || ch == '\t' || ch == '\n')) {
        //     state = OUT;
        // }
    }
    printf("%d %d %d\n", nc, nl, nw);
    return 0;
}




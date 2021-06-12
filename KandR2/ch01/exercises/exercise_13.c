#include <stdio.h>

#define MAXWORDLEN 12

int get_word_length();

// print a histogram of the lengths of words of input 
int main() {
    // 位置0空出，位置11用于表示长度>10的word
    int ch, nc, i, j, state;
    nc = state = 0;
    int a[MAXWORDLEN];
    for (i = 0; i < MAXWORDLEN; ++i)
        a[i] = 0;

    while ((ch = getchar()) != EOF) {
        ++nc;   // 记录每个读入的字符
        if (ch == ' ' || ch == '\t' || ch == '\n') {
            --nc;   // 不计入空字符
            if (state) {    // 此时读取word结束，更新数组对应单词长度的单元，并将nc归零
                if (nc > 10) a[11]++; 
                else a[nc]++;
                nc = 0;     // 归零的目的是避免对下一个单词的读取产生影响
            } 
            state = 0;
        } else {
            state = 1;
        }
    }

    for (i = 1; i < MAXWORDLEN; ++i) {
        if (i == MAXWORDLEN - 1) printf(">10| ");
        else printf("%3d| ", i);
        for (j = 0; j < a[i]; j++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}

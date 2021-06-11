#include <stdio.h>

/**
 * 依据转换公式 Celsius =(5/9)(Fahrenheit-32) 
 * 打印当Fahrenheit=0,20,...,300时对应Celsius的列表
*/
#define STEP 20
#define LOWER 0
#define UPPER 300

void solution() {
    double fahr, celsius;
    for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
        celsius = (5.0 / 9) * (fahr - 32);
        printf("%3.0f %6.1f\n", fahr, celsius);
    }
}

int main() {
    solution();
    return 0;
}
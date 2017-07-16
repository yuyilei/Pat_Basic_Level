#include <stdio.h>
#include <string.h>

int main(void) {
    char str[80];
    int i = 0, j = 0, k = 0;
    int wordlen = 0;

    gets(str);

    i = strlen(str)-1;
    while(i>=0) {
        i = i-wordlen;
        wordlen = 0; // 重置
        for(j=i; j>=0; j--) {
            if(str[j] == ' ') {
                for(k=j+1; k<=i; k++) { printf("%c", str[k]); }
                printf(" ");
                wordlen+=1; // 跳过空格
                break;
            }
            else { wordlen++; }
        }
    }
    // 输出第一个单词
    for(i=0; str[i]!=' '; i++) {
        printf("%c", str[i]);
    }

    return 0;
}

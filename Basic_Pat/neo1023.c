/***
 * 1023. 组最小数: https://www.patest.cn/contests/pat-b-practise/1023
 */

#include <stdio.h>

int main(void) {
    int num[10];   // num数组中的元素表示该下标的个数
    int i, j;      // 循环变量

    for(i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    // 最小数除0外最小的在前面, 然后填0, 最后排序组合
    for(i = 1; i < 10; i++) {
        if (num[i] != 0) {
            printf("%d", i);
            num[i]--;
            break;
        }
    }
    for(i = 0; i < num[0]; i++) {
        printf("%d", 0);
    }
    for(i = 1; i < 10; i++) {
        for(j = 0; j < num[i]; j++) {
            printf("%d", i);
        }
    }

    return 0;
}

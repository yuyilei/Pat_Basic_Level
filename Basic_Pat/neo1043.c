/*输出PATest*/

#include<stdio.h>

int main(void) {
    char a[10000];
    int n[6] = {0, 0, 0, 0, 0, 0};
    int i ;
    int max;

    scanf("%s",a);

    for (i = 0; a[i] != '\0'; i++){
        switch (a[i]) {
            case 'P' : n[0]++; break ;
            case 'A' : n[1]++; break ;
            case 'T' : n[2]++; break ;
            case 'e' : n[3]++; break ;
            case 's' : n[4]++; break ;
            case 't' : n[5]++; break ;
        }
    }

    // 找出P A T e s t中最大出现个数, 作为下个for循环的循环变量
    max = n[0];
    for(i = 1; i < 6; i++) {
        if(n[i] > n[0]) {
            max = n[i];
        }
    }

    for (  i = 0 ; i < max; i++ ) {
        if (n[0] != 0) { printf("P"); n[0]--;}
        if (n[1] != 0) { printf("A"); n[1]--;}
        if (n[2] != 0) { printf("T"); n[2]--;}
        if (n[3] != 0) { printf("e"); n[3]--;}
        if (n[4] != 0) { printf("s"); n[4]--;}
        if (n[5] != 0) { printf("t"); n[5]--;}
    }
    return 0 ;

}

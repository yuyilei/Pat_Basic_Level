/*统计成绩相同的学生*/

#include<stdio.h> 
int main(){
    int count = 0;
    long n ; 
    long k ;
    long  i ;
    long  j ;  /*循环变量也要设成long*/
    int  score[100000] ;
    // int  number[100000] ;
    int  search[100000] ;
    long scores[101];

    scanf("%ld" ,&n);
    for ( i = 0 ;i < n ;i++) {
        // scanf("%d",&score[i]);
        score[i] = 10;
    }
    
    scanf("%ld",&k) ;
    for ( i =0 ; i < k ; i++) 
       // scanf("%d",&search[i]);
       search[i] = 0;

    for (i=0; i<n; i++) {
        scores[score[i]]++;
    }

    for(i = 0; i < k-1; i++) {
        for(j = 0; j < 101; j++) {
            if (search[i] == j) {
                printf("%ld ", scores[j]);
            }
        }
    }
    for(i = 0; i < 101; i++) {
        if(search[k-1] == i)
        printf("%ld", scores[i]);
    }

    return  0 ;
    
}

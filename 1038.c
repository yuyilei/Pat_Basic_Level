/*统计成绩相同的学生*/
#include<stdio.h>
int main(){

    long n ; 
    long k ;
    long  i ;
    long  j ;  /*循环变量也要设成long*/
    int  score[100000] ;
    int  number[100000] ;
    int  search[100000] ;

    scanf("%ld" ,&n) ;
    for ( i = 0 ;i < n ;i++) 
       scanf("%d",&score[i]);
    
    scanf("%ld",&k) ;
    for ( i =0 ; i < k ; i++) 
       scanf("%d",&search[i]);

    for  ( i = 0 ; i < n ; i++){
    
        for ( j = 0 ; j < k ; j++){
        
            if ( score[i] == search[j])
                number[j]++ ;
        }
    }

    for ( i = 0 ; i < k - 1 ; i++) 
        printf("%d ",number[i]) ;

    printf("%d",number[k-1]) ;
    return  0 ;
    
}

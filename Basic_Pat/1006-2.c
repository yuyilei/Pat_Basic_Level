#include<stdio.h>
int main() {

    int n ; 
    int hundreds = 0 ; // 百位初始化为0 
    int tens = 0 ; // 十位初始化为0 
    int units  ;// 个位
    int i , j ; // 用于遍历

    scanf("%d",&n) ;
    
    if (( n>=1 ) && (n<9))
        units = n ; 

    if  (( n>=10) && (n<=99)) {
    
        units = n % 10 ;
        tens = n / 10 ;
    }

    if (( n >=100) && ( n<=999)) {
    
        units = n % 10 ;
        hundreds = n / 100 ;
        tens =(n - hundreds * 100 - units) /10 ;
    }


    for ( i = 0 ; i < hundreds ; i ++) 
        printf ("B") ;
    for  ( i = 0 ; i < tens ; i++) 
        printf("S") ;
    for ( i = 0 ; i < units ; i++) 
        printf("%d",i+1) ;

    return 0 ; 

 }

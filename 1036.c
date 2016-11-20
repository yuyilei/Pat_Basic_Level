/*和奥巴吗一起编程*/

#include<stdio.h>
int main (){

    char a ;
    int n ;
    int m ; 
    int  i ; 
    int  j ;

    scanf("%d %c" , &n , &a);

    if ( n % 2 == 0)
        m = n / 2 ;
    else 
        m = ( n + 1) / 2 ;
     
    for ( i  =0 ; i < n ; i ++)
        printf("%c",a);
        printf("\n");

    for ( i = 1 ; i < m - 1 ; i ++){
    
        printf("%c",a);
        for( j = 0 ; j < n - 2 ;j++)
            printf(" ");
        printf("%c",a);
        printf("\n");
    }

    for ( i = 0  ; i < n ; i ++)
        printf("%c",a);

    return 0 ;
}

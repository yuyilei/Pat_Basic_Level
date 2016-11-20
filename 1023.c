/*组最小数*/

#include<stdio.h>

int main (){

    int i ;
    int j ;
    int n ;
    int a[10] ;

    for( i =0 ; i < 10 ; i++)
        scanf("%d",&a[i]);

    for ( i = 1 ; a[i] != 0, i< 10; i++ ){
    
        printf("%d",i);
        n = i ;
        break ;
    }        

    if ( a[0] != 0)
        for( i = 0; i < a[0] ; i++)
            printf("0");

    for ( i = a[n] - 1 ; i > 0 ; i--)
        printf("%d",n);

    for ( i = n + 1 ; i < 10 ; i ++ )
        for ( j = a[i] ; j > 0 ; j-- )
            printf("%d",i);

    return 0 ;
}

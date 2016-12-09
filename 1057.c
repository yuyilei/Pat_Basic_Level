#include<stdio.h>
#include<string.h>
int main(){

    char a[100000] ;
    long i ;
    long len ;
    long b[26] = {0};
    long sum = 0 ;
    long zero = 0 ;
    long one = 0;

    gets(a) ;

    len = strlen(a) ;

    for ( i = 0 ; i < len ; i ++){
    
        if ( 'a' <= a[i] && 'z' >=a[i] )
            b[(long)(a[i] - 'a')] ++ ;

        if ( 'A' <= a[i] && 'Z' >=a[i])
            b[(long)(a[i] - 'A')] ++ ;

    }
    
    for ( i = 0 ; i < 26 ; i++)
        sum += (i+1)*b[i] ;
    if ( sum == 0)
        printf("0 0") ;
    else {
    do {
    
        if ( sum % 2 == 1)
            one ++ ;
        else if ( sum % 2 == 0)
            zero ++ ;
        sum /= 2 ;
    } while( sum>0 ) ;
    
    printf("%ld %ld",zero , one) ; 
    }
    return 0 ;
}

#include<stdio.h>
int main(){

    long n ; 
    long a[100000] = {0} ;
    long i ;
    long b ;
    long res ;
    long number = 0 ;
    long j ;

    scanf("%ld",&n) ;

    for ( i = 0 ; i < n ; i++ ){
    
        scanf("%ld",&b) ;
        a[b] ++ ;
                
    }

    res = n ;
    number = 0 ; 

    for ( i = n ; i >= 0 ; i--){
        number = 0 ;
        for ( j = n ; j > i ; j--)
            number += a[j] ;
        if ( number >= i ){
        
            res = i ;
            break ;
        }
    }

    printf("%ld",res) ;
    return 0 ; 
}

/*挖掘机技术哪家强*/

#include<stdio.h>
int main(){

    long n ;
    long long  add[100000] ;
    int  score ;
    long  school ;
    int  i ; 
    long long max ;
    long number ;

    scanf("%ld",&n) ; 

    for ( i = 0 ; i < n ; i++)
        add[i] = 0;

    for ( i = 0 ; i < n ; i++){
        
        scanf("%ld %d",&school,&score) ;
        add[school] += score ;
    }

    max = add[1] ;
    number = 1 ;

    for ( i = 0 ; i < n ; i++){
    
        if ( add[i] > max){
        
            max = add[i] ;
            number = i ;
        }
    }

    printf("%ld %lld",number,max) ;
    return 0 ;

}



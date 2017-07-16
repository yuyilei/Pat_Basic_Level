#include<stdio.h>
int main(){

    long c1 ;
    long c2 ;
    long second ;
    int  h ;
    int  m ;
    int  s ;

    scanf("%ld %ld",&c1,&c2) ;
   
    if ( ( c2 -c1 ) % 100 == 0 )
   second = ( c2 - c1 ) /100 ;
    else if ( ( c2 - c1 ) % 100 >=1 && ( c2 - c1 ) % 100 <=49 )
   second = ( c2 - c1 ) /100 ;
    else if ( ( c2 - c1) % 100 >=50 && ( c2 - c1 ) % 100 <=99 )
   second = ( c2 -c1 )  /100 + 1 ;

    h = second / 3600 ;
    m =( second - h * 3600 ) / 60 ;
    s =  second - h * 3600 - m * 60  ;

    printf("%02d:%02d:%02d",h , m , s) ;
    
    return 0 ;
}

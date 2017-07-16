#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){

    char a[1000] ;
    char b[1000] ;
    
    double  n ;
    long i ;
    double  len1 ;
    double  len2 ;
    long double number1 = 0;
    long double number2 = 0;
    long double sum ;
    char result[1000] = {0} ;
    int  len3 ;

    scanf("%s %s %lf",a,b,&n) ;

    len1 = strlen(a) ;
    len2 = strlen(b) ;

    for ( i = len1-1 ; i >=0 ; i--) {
    
        number1 += ((double)(a[i] - '0')) * pow( n , len1 - 1 - i) ;
    }  

    for ( i = len2 -1 ; i >= 0 ; i--){
    
        number2 += ((double)(b[i] - '0')) * pow( n , len2 -1 - i) ;
    }

    sum  = number1 + number2 ;

    for ( i = 0 ; sum > 0 ; i++){
    
        result[i] = (char) ( (long)sum % (long )n ) ;
        sum = (long)sum %(long) n ; 
    }

    len3 = strlen(result) ;

    for ( i = len3 -1 ; i >= 0 ; i --){
    
        printf("%c",result[i]) ;
    }

    return 0 ;
}

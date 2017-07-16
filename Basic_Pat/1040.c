#include<stdio.h>
#include<string.h>

int main(){

    char n[100000]  ;
    long i ;
    long j = 0  ;
    long k = 0  ;
    long s = 0  ;
    long q = 0  ;
    long p[10000] = {0 };
    long a[10000] = {0 };
    long t[10000] = {0 };
    long len ;
    long d = 1 ;
    long m = 1 ;
    long long sum = 0;

    scanf("%s",n) ;

    len = strlen(n) ;
    for ( i = 0 ; i < len ; i++ ){
     
        if ( n[i] == 'P')
            p[j++] = i ;
        else if  ( n[i] == 'A')
            a[k++] = i ;
        else 
            t[s++] = i ;
    }

    for ( i = p[0] ; i <= p[j -1] ; i = p[d++] )
        for ( q = i ; q <=a[k -1] ;   )
            if ( n[q] == 'A') {
                sum = sum + s -   ; 
                
              }
             else{
             
                 q++ ;
             } 

   printf("%lld",sum % 1000000007) ;
  return 0 ; 
          
} 

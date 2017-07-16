/*素数对猜想*/

#include<stdio.h>

int tell(long number){     //判断是否是素数
    int i ;
    int count = 0 ;
    for ( i = 3 ; (i <= number) && (count <= 1); i=i+2 ){ 
        if ( number % i == 0)
            count++ ;
    }
    if ( count == 1)
        return 1 ;
    else 
        return 0 ;
}

int main(){

    long i = 0;
    long n  ;
    long prime = 3  ;
    long count = 0  ;
 
    scanf("%ld",&n) ;

    
    if ( n <= 3 )
        printf("%d", 0) ;

    else {
        for (prime=3; prime <=n-2 ; prime = prime + 2 ) { 
          if ( tell(prime) == 1) {
              if ( tell(prime+2) == 1 ) {
                  count++;
              }
              else {
                  prime += 2;
              }
          }
        }
        printf("%ld",count) ;
    }
    

    for(i = 0; i< n; i++) {
        if (tell(i) == 1) {
            count++;
        }
    }
    printf("%ld", count);

    return 0 ;
}

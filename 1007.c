/*素数对猜想*/

#include<stdio.h>
int tell(long number){     //判断是否是素数
    int i ;
    int count = 0 ;
    for ( i = 1 ; i <= number && count <= 3 ; i++ ){ 
        if ( number % i == 0)
            count++ ;
    }
    if ( count == 2)
        return 1 ;
    else 
        return 0 ;
}

int main(){

    long n  ;
    long prime = 3  ;
    int  count = 0  ;
 
    scanf("%ld",&n) ;

    if ( n <= 3 )
        printf("0") ;

    else {
            for ( ; prime <=n ; prime = prime + 2 ) { 
          if ( tell(prime) == 1 && tell(prime + 2) == 1 )
                count++ ;
      }
            printf("%d",count) ;
  }
    return 0 ;
}

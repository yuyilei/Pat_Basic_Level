#include<stdio.h>
int main(){

    long n;
    long c1 = 0 ;
    long c2 = 0 ;
    long j1 = 0 ;
    long j2 = 0 ;
    long b1 = 0 ;
    long b2 = 0 ;
    long i ;
    char a[100000] = {};
    char b[100000] = {};
    long jia1 = 0 ;
    long jia2 = 0 ;
    long tie = 0 ;
    long max1 ;
    long max2 ;

    scanf("%ld \n     ", &n) ;

    for (i = 0 ; i < n ; i++){
        scanf("\n%c %c",&a[i], &b[i]);
    }

//    printf("a->");
    for (i = 0; i< n; i++) {
  //      printf("%c", a[i]);
    }
  //  printf("\n");
  //  printf("b->");
    for (i = 0; i< n; i++) {
   //     printf("%c", b[i]);
    }
  //  printf("\n");

    for ( i = 0 ; i < n ; i++){
           
        if ( a[i] == b[i] ) {
            tie++;
        }

        else if ( a[i] == 'C' && b[i] == 'J'){
        
            c1++ ; 
            jia1++;
        }

        else if ( a[i] == 'C' && b[i] == 'B'){
        
            b2++ ;
            jia2++ ;
        }

        else if ( a[i] == 'J' && b[i] == 'B'){
        
            j1++ ;
            jia1++ ;
        }

        else if ( a[i] == 'J' && b[i] == 'C'){
        
            c2++ ;
            jia2++ ;
        }
       
        else if ( a[i] == 'B' && b[i] == 'C'){
        
            b1++ ;
            jia1++ ;
        }

        else if ( a[i] == 'B' && b[i] == 'J'){
        
            j2++ ;
            jia2++ ;
        }
    }

    max1 = c1 ;
    max2 = c2 ;

    max1 = ( c1 > j1 ) ? c1 : j1 ;
    max1 = ( max1 > b1 ) ? max1 : b1 ;

    max2 = ( c2 > j2 ) ? c2 : j2 ;
    max2 = ( max2 > b2 ) ? max2 : b2 ;

   printf("%ld %ld %ld\n",jia1 , tie  , jia2 ) ;
   printf("%ld %ld %ld\n",jia2 , tie ,  jia1 ) ;  

   if ( max1 == b1 )
       printf("B ") ;
   else if ( max1 == c1 )
       printf("C ") ;
   else if ( max1 == j1 )
       printf("J ") ;

   if ( max2 == b2 ) 
       printf("B")  ;
   else if ( max2 == c2 )
       printf("C")  ;
   else if ( max2 == j2 )
       printf("J")  ;

   return 0 ;
}

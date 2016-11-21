#include<stdio.h>

int main(){

    char a[10] = " ";
    char b[10] = " ";
    int  n ;
    int  m ;
    int i ;
    int j ;
    long  sum1 = 0 ;
    long sum2  = 0 ;


     scanf("%s %d %s %d",a ,&n ,b ,&m);
     

     for ( i = 0 , j = 1; a[i] != '\0' ; i++  )
         if ( n == (int)( a[i] - 48)){
         sum1 += n * j ;
      j = j * 10 ; 
     }


     for ( i = 0 , j = 1; b[i] != '\0'  ;i++ )
         if ( m == (int)( b[i] - 48)){
         sum2 += m * j ;
       j = j * 10 ;
      }

     printf("%ld" ,sum1+sum2);
     return  0 ;

          
             
   

     
}

#include<stdio.h>
int main(){

    int i ;
    double a[100000] = {0.00} ;
    int n ;
    int b[100000] = {0} ;
    double sum = 0;

    scanf("%d",&n) ;

    for ( i = 0 ;i < n ; i++)
        scanf("%lf",&a[i]) ;
   
   if ( n == 1)
       printf("%.2lf",a[0]) ;
   if ( n == 2)
       printf("%.2lf", 2*(a[0] + a[1])) ;
   if ( n >= 3){
       for ( i = 0 ; i <= n/2 ; i++){
             
           b[i] = (n - i) * ( i + 1) ;
           b[n-1 - i] = ( n - i ) * ( i + 1) ;
       }
    }
  
   for ( i = 0 ; i< n ; i++)
     sum +=(double)(a[i]*b[i]) ;

   if ( n >2 )
   printf("%.2lf",sum) ;
 return 0 ;   
}

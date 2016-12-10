#include<stdio.h>
#include<math.h>
int main(){

    int n ;
    int a ;
    int b ;
    int i ;
    int max = 0 ;
    double  res = 0 ;

    scanf("%d",&n) ;

    for ( i = 0 ; i < n ; i++) {
    
        scanf("%d %d",&a,&b) ;
        
        if ( a*a + b*b > max)
           max = a*a + b*b ; 
    }

    printf("%.2lf",sqrt((double)max)) ;

}

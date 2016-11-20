/*组合数的和*/
#include<stdio.h>

int main (){
    int n ;
    int a[10] = { 10 ,10,10,10,10,10,10,10,10,10} ;
    int i ;
    int sum = 0  ;

    scanf("%d",&n);

    for ( i = 0 ; i< n ; i++){
    
        scanf("%d",&a[i]) ;
       
    }

    for ( i = 0 ;  a[i] <10 ; i++) {
    
        sum += (n -1)*a[i]*10 + (n-1)*a[i] ;  
    }

    printf("%d",sum);
   return 0 ;

}

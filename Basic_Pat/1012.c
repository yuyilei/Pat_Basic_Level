#include<stdio.h>

int main(){

    int n ;
    int i ;
    int a ;
    int t = 0 ;
    int a1 = 0 ;
    int a2[1000] = {0} ;
    int a3 = 0 ;
    int a4 = 0 ;
    int a5 = 0 ;
    float mean ;
    int sum = 0 ;
    int k = 0 ;


    scanf("%d",&n) ;

    for ( i = 0; i < n ;i++){
        
        scanf("%d",&a) ;

        if ( a % 10 == 0){
        
            a1 += a;
        }

        else if ( a % 5 == 1){
        
            a2[t++] = a ;
        }

        else if ( a % 5 == 2){
        
            a3++ ;
        }

        else if ( a % 5 == 3){
        
            a4 += a ;
            k++ ;
        }

        else if ( a % 5 == 4){
          
            a5 = ( a5 > a) ? a5 : a ;
        }
    }
    
    if ( k != 0 )
    mean = (float)(1.0*a4/k) ;

    if ( a1 == 0 )
        printf("N ") ;
    else 
        printf("%d ",a1);

    if ( t == 0)
        printf("N ") ;
    else {
    
        for ( i = 0 ; i < t ; i ++) {
            if ( i % 2 == 0)
                sum += a2[i] ;
            else 
                sum -= a2[i]  ;
          }
        printf("%d ",sum) ;
    }

    if ( a3 == 0)
        printf("N ");
    else 
        printf("%d ",a3) ;

    if ( a4 == 0)
        printf("N ") ;
    else 
        printf("%.1f ",mean) ;

    if ( a5 == 0)
        printf("N") ;
    else 
        printf("%d",a5) ;

    return 0 ; 
}

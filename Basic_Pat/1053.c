#include<stdio.h>
int main(){

    int n ;
    float e ;
    int d ;
    float a[1000] = {0} ;
    int i ;
    int count[1000] = {0} ;
    int number[1000] = {0} ;
    int j ;
    float rate1 = 0 ;
    float rate2 = 0 ;

    scanf("%d %f %d ",&n,&e,&d) ; 

        for ( i = 0 ; i < n ; i++){
        
            scanf("%d",&number[i]) ;

            for ( j = 0 ; j < number[i] ; j++){
            
                scanf("%f",&a[j]) ;
                if ( a[j] < e)
                    count[i]++ ;
            }
        }

    for ( i = 0 ; i < n ; i++){
    
        if ( number[i] > d && 2*count[i] > number[i] )
            rate2++ ;
        else if ( count[i] > 0 && count[i] <= d && 2*count[i] > number[i])
            rate1++ ;
    }

    printf("%.1f%% %.1f%%",100.0*rate1/n,100.0*rate2/n) ;
    return 0 ;
}

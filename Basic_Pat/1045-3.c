#include<stdio.h>
int main(){

    long n ; 
    long i = 0 ;
    long max = 0 ;
    long maxi = 0 ;
    long s ;
    long res[100000] = {0} ; 
    long j = 0 ;

    scanf("%ld",&n) ;

    for (i = 0; i < n ; i++){
    
        scanf("%ld",&s) ; 
        if ( s > max ){
        
            res[maxi++] = s ;
            max = s ;

        } 

        else {
        
            for( j = maxi - 1 ; j >= 0 ; j-- ){
            
                if(res[j] > s ){
               
                   maxi-- ; 
                   res[j] = 0 ; 
               } 
                else {
                
                    maxi = j + 1  ;
                    break ; 
                }
            }
        }
    }
    if (maxi == 0 ){
    
        printf("0\n\n") ;
    }
    else {
        printf("%ld\n",maxi) ;
        for (j = 0 ; j < maxi - 1 ; j++)
            printf("%ld ",res[j]) ;
        printf("%ld",res[maxi - 1]) ;
    }

    return 0 ; 

}

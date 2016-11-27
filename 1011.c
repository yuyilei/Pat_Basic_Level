/*A，B和C*/
#include<stdio.h>

int main(){

    long  long a[10] ;
    long  long b[10] ;
    long  long c[10] ;
    int t ;
    int i ;
    
    scanf("%d",&t);
    
    for ( i = 0 ; i < t ; i++)
        scanf("%lld %lld %lld",&a[i],&b[i],&c[i]) ;

    for ( i = 0 ; i < t ; i++){
    
        if ( a[i] + b[i] > c[i])
            printf("Case #%d: true\n",i+1);
        else  
            printf("Case #%d: false\n",i+1);
    }        
    
    return 0 ;
}

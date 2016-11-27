/*A，B和C*/
#include<stdio.h>

int main(){

    long a[10] ;
    long b[10] ;
    long c[10] ;
    int t ;
    int i ;
    
    scanf("%d",&t);
    
    for ( i = 0 ; i < t ; i++)
        scanf("%ld %ld %ld",&a[i],&b[i],&c[i]) ;

    for ( i = 0 ; i < t ; i++){
    
        if ( a[i] + b[i] > c[i])
            printf("Case #%d: ture\n",i+1);
        else  
            printf("Case #%d: false\n",i+1);
    }        
    
    return 0 ;
}

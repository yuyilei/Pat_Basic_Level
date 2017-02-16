#include<stdio.h>
int prime(long n){

    int i = 3 ;
    for(i=3;i*i<=n;i++)
        if ( n % i == 0)
            break ; 
    if (i*i>n) 
        return 1 ;
    else 
        return 0 ; 
}

int main(){

    int m ;
    int n ;
    long d = 3 ;
    long a[10000] = {0} ;
    int j ;
    int t = 1 ;
    
    scanf("%d %d",&m,&n);

    while(t < n ){
    
        if( prime(d)==1){
        
            a[t++] = d ;
        }
     d = d + 2 ;
    }
     
    a[0] = 2 ;     
     
    for(j = m - 1; j < n - 1 ; j++){
        
        if ( (j-m+2) % 10 == 0)
            printf("%ld\n",a[j]) ; 
        else 
            printf("%ld ",a[j]) ;
    }
    printf("%ld",a[n-1]) ; 
    
    return 0 ; 
}

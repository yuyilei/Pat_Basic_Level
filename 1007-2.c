#include<stdio.h>
int prime(long n){

    long i ;
    for (i=3;i * i <=n ; i=i+2){
    
        if ( n % i == 0)
            break ;
    }
    if (n==2){
    
        return 1 ;
    }
    else{
    
        if (i*i>n)
            return 1 ;
        else 
            return 0 ;
    }
}

int main(){


    long n ;
    long i ;
    long a[10000] = {0} ;
    long t = 2 ;
    scanf("%ld",&n) ;
    
    a[1] = 2 ;
    for ( i = 3 ;i <= n ; i=i+2){
    
        if (prime(i) == 1)
            a[t++] = i ;
    }
        
    int count = 0 ;
    int d[1000] = {0} ;
    for (i=1 ; a[i] != 0 ;i++){
        
        d[i] = a[i+1] - a[i] ;
        if (d[i] == 2)
            count++ ;
        
    }    
    printf("%d",count) ; 
    return 0 ; 

   
}

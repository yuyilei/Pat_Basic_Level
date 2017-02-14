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
    int i= 0 ; 
    int j ;

 //   printf("2") ;
    scanf("%d %d",&m,&n);
 //   printf("%d %d",m,n) ; 
  //  printf("1") ; 
    while(i < n && d % 2 != 0){
    
        if(i > m && prime(d)==1){
        
            a[i++] = d ;
        }
     d += 2 ;
    }

    for(j = 0 ; j < n - m ; j++){
    
        if (j != 0 && j % 10 == 0)
            printf("%ld\n",a[j]) ; 
        else 
            printf("%ld ",a[j]) ;
    }
    return 0 ; 
}

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
    int t = 0 ;
    long res[10000] = {0} ;
    
 //   printf("2") ;
    scanf("%d %d",&m,&n);
//   printf("%d %d",m,n) ; 
  //  printf("1") ; 
   while(t < n && d % 2 != 0){
    
        if( prime(d)==1){
        
            a[t++] = d ;
        }
     d = d + 2 ;
    }

    if(m==1){
    
        a[m-2] = 2 ;
    }    

    for(j =m-2; j < n - 2 ; j++){
        
        if ( (j-m+3) % 10 == 0)
            printf("%ld\n",a[j]) ; 
        else 
            printf("%ld ",a[j]) ;
    }
    printf("%ld",a[n-2]) ; 
    
    return 0 ; 
}

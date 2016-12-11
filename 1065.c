#include<stdio.h>
#include<stdlib.h>
int comp(const void*a,const void*b){
    return *(int*)a-*(int*)b;
}
int main(){

    long n ;
    long m ;
    long a[50000] = {0} ;
    long b[50000] = {0} ;
    long c[50000] = {0} ;
    long d[10000] = {0} ;
    int  mark1[50000] = {0} ;
    int  mark2[50000] = {0} ;
    int  mark3[50000] = {0} ;
    long i ;
    long j ;
    int  number = 0 ;
    int  mark = 0 ;
    int  t = 0 ;

    scanf("%ld",&n) ;

    for ( i = 0 ; i < n ; i++)
        scanf("%ld %ld",&a[i],&b[i]) ;

    scanf("%ld",&m) ;

    for ( i = 0 ; i < m ; i++)
        scanf("%ld",&c[i]) ;

    for ( i = 0 ; i < m ; i++){
    
         for (  j = 0 ; j < n ; j++){
         
             if ( c[i] == a[j] ){
                 mark3[i] = -2 ;
                 mark1[j] = -2 ;
                }
             if ( c[i] == b[j] ){
                 mark2[j] = -2 ;
                 mark3[i] = -2 ;
               }
         }

    }

    for ( i = 0 ; i < m ; i ++ ){
    
        if ( mark3[i] == 0 )
            d[t++] = c[i] ;
    
    }

   

    for ( i = 0 ; i < n ; i++){
        if  ( mark1[i] == 0 && mark2[i] == -2 )
            d[t++] = b[i] ;
        
        if ( mark2[i] == 0 && mark1[i] == -2 )
            d[t++] = a[i] ; 
    }
   
    number = t ;

   /* for ( i = 0 ; i < number  - 1; i++){
    
        for ( j = 0 ; i + j < number -1   ; j++){
        
            if ( d[j] > d[j+1] ){
            
                mark = d[j] ;
                d[j] = d[j+1] ;
                d[j+1] = mark ;
            }
        }
    }
  */
    qsort(d,number,sizeof(long),comp);

    if ( number == 0)
        printf("0") ;
    else {
    printf("%d\n",number) ;

    for ( i = 0 ; i < number - 1 ;i++)
        printf("%ld ",d[i]) ;
    printf("%ld",d[number -1]) ;
    }

    return  0 ;

}

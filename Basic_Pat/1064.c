#include<stdio.h>
int main(){

    int n ;
    int a[10000] = {-1} ;
    int i ;
    int b[10000] = {0} ;
    int j ;
    int mark = 0 ;
    int number = 0 ;
    int c[10000] = {0} ;

    scanf("%d",&n) ;
    
    for( i = 0 ; i < n ; i ++){
    
        scanf("%d",&a[i]) ;

        do {
             b[i] += a[i] % 10 ;
             a[i] /= 10 ;

        }while(a[i] > 0 ) ;
    }

    for ( i = 0 ; i < n ; i++){
    
        for ( j = 0 ; j + i < n - 1; j++){
        
            if ( b[j] > b[j + 1] ){
            
                b[j] = b[j+1] + b[j] ;
                b[j+1] = b[j] - b[j+1] ;
                b[j] = b[j] - b[j+1] ;
            }
        }
    }
    
   // printf("%d ",b[0]) ;

    for ( i = n - 1; b[i] == b[n-1] ;i--){
    
        if ( b[i -1 ] != b[n-1] )
            mark = i - 1 ;
       }
    j = 0 ;        
    for ( i = 0 ; i <= mark  ; i++){
        if ( b[i] != b[i+1]){
    //        printf("%d  ",b[i]) ;
              c[j++] = b[i] ;
            number++ ;
          }
    }      

    printf("%d\n",number+1) ; //去头去尾，所以要加2！！

    for ( i = 0 ; i < j ; i++)
        printf("%d ",c[i]) ;
    printf("%d",b[n-1]);
    return 0 ;
}

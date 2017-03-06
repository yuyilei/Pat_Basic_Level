#include<stdio.h>
int main() {

    int n ; 
    int m ;
    int a ;
    int b ;
    int res ;

    scanf("%d%d%d%d%d",&n,&m,&a,&b,&res) ;

    int c[n][m] ;

    int i ; 
    int j ; 

    for ( i = 0 ; i < n ;  i++) {
    
        for ( j = 0 ; j < m ; j++) {
        
            scanf("%d",&c[i][j]) ;

            if (c[i][j] >=a && c[i][j] <=b){
           
               c[i][j] = res ;
           }
        }
    }

    for  ( i = 0 ; i< n ; i++) {
    
        for ( j = 0 ; j < m ; j++) {
        
            if ( j != m-1){
            
                printf("%03d ",c[i][j]) ;
            }

            else {
            
                printf("%03d\n",c[i][j]) ;
            }
        }
    }

    return 0 ; 
}

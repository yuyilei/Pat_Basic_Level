#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int tell( long long c[][10000] , long long tol , int a , int b ){
    
    int i = a - 1 ; 
    int j = b - 1 ;
    int flag = 0 ;
    
    if (c[a][b] - c[a-1][b-1] >0 )
        flag = 1 ;
    else 
        flag = -1 ;

        for ( ; i <= a + 1 ; i++ ) {
        
            if ( flag*(c[a][b] - c[i][j] ) <= tol  ) {
            
                return 0 ; 
            }
        }

        i = a + 1 ;
                
        for ( ; j <= b + 1  ; j++ ) {
        
            if ( flag*(c[a][b] - c[i][j] ) <=tol ) {
            
                return 0 ;
            }
        } 

        j = b + 1 ;

        for ( ; i >= a - 1 ; i-- ) {
        
            if ( flag*(c[a][b] - c[i][j] ) <= tol ){
            
                return 0 ;
            }
        }


        i = a - 1 ;

        for ( ; j > b - 1 ; j-- ) {
        
            if ( flag*(c[a][b] - c[i][j] ) <= tol ) {
            
                return 0 ;
            }
        }
    
        return 1 ;
    

} 

int main () {

    int n ; 
    int m ;
    long long  tol ;
    scanf("%d%d%lld",&n,&m,&tol) ;

    long long a[m][10000] ;

    int i ;
    int j ; 

    for ( i = 0 ; i < m ; i++) {
    
        for ( j = 0 ; j < n ; j++) {
        
            scanf("%lld",&a[i][j]) ;
        }
    }

    int x = 0 ;
    int y = 0;
    long long res = 0 ;
    int flag1 = 0 ;
    int flag2 = 0 ;

    for ( i = 1 ; i < m -1 ; i++ ){
    
        for ( j = 1 ; j < n -1 ; j++ ) {
        
            int temp = tell(a,tol,i,j) ;

            if ( flag1 == 1 && temp == 1) {
            
                flag2 = 1 ;
                break ;
            }
            
            if ( flag1 == 0 && temp == 1 ){
            
                flag1 = 1 ;
                x = j + 1 ;
                y = i + 1 ;
                res = a[i][j] ;
          }

       }
        if ( flag2 == 1)
            break ;
    }

    if ( flag1 == 0) 
        printf("Not Exist\n") ;
    else if (flag2 == 1)
        printf("Not Unique\n") ;
    else 
        printf("(%d, %d): %lld",x,y,res) ;

//    printf("%d",tell(a,tol,2,4)) ;


   // printf("%d",sub(a[0][0],a[1][1],tol)) ; 
    return 0 ;


}

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int sub( long long a , long long b ,long long tol ) {

    if ( ( a -b ) > tol  || ( b - a) > tol) 
        return 1 ;
    else 
        return 0 ;
        
}

int tell( long long c[][10000] , long long tol , int a , int b ){
    
    int i = a - 1 ; 
    int j = b - 1 ;

        for ( ; i <= a + 1 ; i++ ) {
        
            if ( abs(c[a][b]-c[i][j]) > tol  ) {
            
                return 1 ; 
            }
        }
                
        for ( ; j <= b + 1  ; j++ ) {
        
            if ( sub(c[a][b],c[i][j],tol) == 0){
            
                return 2 ;
            }
        } 

        for ( ; i >= a - 1 ; i-- ) {
        
            if ( sub(c[a][b],c[i][j],tol) == 0){
            
                return 3 ;
            }
        }


        for ( ; j > b - 1 ; j-- ) {
        
            if ( sub(c[a][b],c[i][j],tol) == 0) {
            
                return 4;
            }
        }
    
        return 5 ;
    

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

/*    for ( i = 1 ; i < m -1 ;  ){
    
        for ( j = 1 ; j < n -1 ; ) {
        
            if ( tell(a,tol,i,j) == 0 ) {
            
                i += 2 ;
                j += 1 ;
                printf("!") ;
            }

            else if ( flag1 == 0){
            
                flag1 = 1 ;
                j ++ ;
                x = i + 1 ;
                y = j + 1 ;
                res = a[i][j] ;
                printf("?") ;
            }

            else if ( flag1 == 1) {
            
                flag2 = 1 ;
                break ;
            }
        }

        if ( flag1 == 0 ){
        
            i++ ;
        }

        if ( flag1 == 1 && flag2 == 0 ){
        
            i++ ;
        }

        if ( flag2 == 1)
            break ;
    }

    if ( flag1 == 0) 
        printf("Not Exist\n") ;
    else if (flag2 == 1)
        printf("Not Unique\n") ;
    else 
        printf("(%d,%d): %lld",x,y,res) ;
*/
    printf("%d",tell(a,tol,1,1)) ;
   // printf("%d",sub(a[0][0],a[1][1],tol)) ; 
    return 0 ;


}

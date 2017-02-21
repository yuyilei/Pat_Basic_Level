#include<stdio.h>

int main() {

    int number ;
    int a[10001] = {0} ;
    int i , j , t ;
    int m , n ;
    int temp ; 

    scanf("%d",&number) ;

    n = 1 ;
    m = number ; 
    for ( i = 1 ; i < number ; i++){
    
        if (number % i == 0 && m > number / i && (number / i ) >= i ){
            m = number / i ;
            n = i ;
           }
    }

    printf("1") ; 
    for ( i = 0 ; i < number ; i++) {
        scanf("%d",&a[i]) ;
        printf("%d ",a[i]) ;
    }

    for ( i = 0 ; i < number - 1 ; i++){
    
        for ( j = 0 ; j +i < number -1 ; j++){
        
            if (a[j] < a[j+1]){
            
                temp = a[j] ; 
                a[j] = a[j+1] ;
                a[j+1] = temp ;
            }
        }
    }

    int b[m][n] ; 

    for ( i = 0 ; i < m ;i++)
        for ( j = 0 ; j < n ; j++)
            b[i][j] = 0 ;

    t = 0 ;
    
    i = 0 ; 
    j = 0 ;

    while ( t < number){

    
        for ( ; j < n ; j++ ){
        
            if (b[i][j] != 0) {
            
                b[i][j] = a[t++] ;
            }

            else {
            
                break ;
            }
        }

        i++ ;
        j-- ;

        for ( ; i < m ; i++ ){
        
            if(b[i][j] != 0) {
            
                b[i][j] = a[t++] ;
            }

            else {
            
                break ;
            }
        }

        i-- ;
        j-- ; 

        for ( ; j >= 0 ; j--){
        
            if (b[i][j] != 0) {
            
                b[i][j] = a[t++] ;
            }

            else {
            
                break ;
            }
        }
        
        j++ ;
        i-- ;

        for ( ; i >= 0 ; i--) {
        
            if (b[i][j] != 0) {
            
                b[i][j] = a[t++] ;
            }

            else {
            
                break ;
            }
        }

        i++ ;
        j++ ;
        
    }

    for ( i = 0 ; i < m ; i++){
    
        for ( j = 0 ; j < n ; j++){
        
            if ( j < n - 1 )
                printf("%d ",b[i][j]) ;

            else
                printf("%d\n",b[i][j]) ;
        }
    }
    

    printf("%d %d",m,n) ; 
    return 0 ; 
}



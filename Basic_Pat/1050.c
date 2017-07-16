#include<stdio.h>
int main(){

    int n ;
    int row   ; //row >= line
    int line  ;
    int  i ;
    int a[10000] = {0} ;
    int j = 0 ;
    int differ ;
    int b[100][100] = {0} ;

    scanf("%d",&n) ;
    for ( i = 0 ; i < n ; i++)
        scanf("%d",&a[i]) ;

    for ( i = 0 ; i < n ; i++){
    
        for (  j = 0 ; j + i < n -1 ; j++){
        
            if ( a[j] <= a[j + 1]) {
            
                a[j] = a[j] + a[j+1] ;
                a[j+1] = a[j] - a[j+1] ;
                a[j] = a[j] - a[j+1] ;
            }
        }
    }
    
    differ = n - 1 ;
    row  = n ;
    line = 1 ;
    for (  i = 2 ; i * i < n ; i ++){
    
        if ( n % i == 0 && differ > row - line){
        
            line = i ;
            row = n / i ;
            differ = row - line ;
        }
    }

    for  ( i = 0 ; i < line ; i++)
    
        b[0][i] = a[i] ;
    

    for ( i = 1 ;  i < row ; i++)
        b[line -1][i] = a[i+line-1] ;

    for ( i = line )

}

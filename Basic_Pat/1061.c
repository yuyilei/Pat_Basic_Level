#include<stdio.h>
int main(){

    int n ;
    int m ;
    int s[100] = {-1} ;
    int a[100] = {-1} ;
    int t[100][100] = {-1} ;
    int i ;
    int j ;
    int sum[100] = {0} ;

    scanf("%d %d",&n,&m) ;

    for ( i = 0 ; i < m ; i++)
        scanf("%d",&s[i]) ;
    for ( i = 0 ; i < m ; i++)
        scanf("%d",&a[i]) ;

    for ( i = 0 ; i < n ; i++ ){
    
        for ( j = 0 ; j < m ; j ++) {
            scanf("%d",&t[i][j]) ;
            if ( t[i][j] == a[j] )
                sum[i] += s[j] ;
        }
    }

    for ( i = 0 ; i < n ; i++)
        printf("%d\n",sum[i]) ;
    return 0 ;
}

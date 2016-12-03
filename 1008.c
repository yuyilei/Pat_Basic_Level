#include<stdio.h>

int main(){

    int n ;
    int M ;
    int m ;
    int a[100] = {0};
    int t[100] = {0};
    int i ;

    scanf("%d %d\n",&n,&M) ;

    m = M % n ;
    for ( i = 0 ;i < n ; i++)
        scanf("%d",&a[i]);

    for ( i = m ; i < n ; i ++ )
        t[i] = a[i-m] ;

    for ( i = 0 ; i < m ; i ++)
        t[i] = a[i+n-m] ;

    for ( i = 0 ; i < n-1 ;i ++)
        printf("%d ",t[i]);
        printf("%d",t[n-1]);

        return 0 ;
}

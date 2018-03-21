#include<cstdio>
using namespace std ;

int main() {
    int i, n, t ;
    int m[10001] = {0} ; 
    scanf("%d",&n) ; 
    for ( i = 1 ; i <= n ; i++ ) {
        scanf("%d",&t) ; 
        int cha = ( t > i ) ? ( t - i ) : ( i - t ) ;  
        m[cha]++ ; 
    }
    for ( i = 10000 ; i >= 0 ; i-- ) {
        if ( m[i] > 1 )                                     // 只输出重复的 。。。。 无语。。。  
            printf("%d %d\n",i,m[i]) ; 
    }
    return 0 ;
}
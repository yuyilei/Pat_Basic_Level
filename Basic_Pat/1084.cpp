#include<queue>
#include<cstdio>
using namespace std ;

int main() {
    int d, n, i, j, len ; 
    scanf("%d %d",&d,&n) ; 
    queue<int> q ; 
    q.push(d) ; 
    for ( i = 0 ; i < n - 1 ; i++ ) {
        len = q.size() ;  
        int now, num = 1 ; 
        for ( j = 0 ; j < len ; j++ ) {
            int t = q.front() ;
            q.pop() ; 
            if ( j == 0 ) 
                now = t ; 
            else if ( t == now ) 
                num++ ;
            else {
                q.push(now) ; 
                q.push(num) ; 
                now = t ; 
                num = 1 ; 
            }
        }
        q.push(now) ; 
        q.push(num) ; 
    }
    len = q.size() ; 
    for ( i = 0 ; i < len ; i++ ) {
        printf("%d",q.front()) ; 
        q.pop() ; 
    } 
    printf("\n") ; 
    return 0 ; 
}
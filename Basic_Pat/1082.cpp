#include<cstdio>
#include<map>
using namespace std ;

int main() {
    map<int,int> m ;
    int i, x, y, n, t, id ;
    int maxx = 0, minn = INT32_MAX, max_index = 0, min_index = 0 ;
    scanf("%d",&n) ; 
    for ( i = 0 ; i < n ; i++ ) {
        scanf("%d %d %d",&id,&x,&y) ; 
        t = x*x + y*y ; 
        m[id] = t ; 
    }
    map<int,int> :: iterator it = m.begin() ; 
    for ( ; it != m.end() ; it++ ) {
        if ( it->second > maxx ) {
            maxx = it->second ; 
            max_index = it->first ; 
        }
        if ( it->second < minn ) {
            minn = it->second ; 
            min_index = it->first ; 
        }
    } 
    printf("%04d %04d\n",min_index,max_index) ; 
    return 0 ; 
}
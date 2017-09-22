#include<cstdio>
#include<vector> 
using namespace std ; 
struct node {
    int num , next ; 
} ; 
int main() {
    int s , n , k , tmp , i , x , j , f = 0 ; 
    scanf("%d %d %d",&s,&n,&k) ; 
    struct node *p = new struct node [100000] ; 
    vector<int> fk[3] ; 
    for ( i = 0 ; i < n ; i++ ){
        scanf("%d",&tmp) ; 
        scanf("%d %d",&p[tmp].num,&p[tmp].next) ; 
    }
    for ( x = s ; x != -1 ; x = p[x].next ) {
        tmp = p[x].num ; 
        if ( tmp < 0 ) 
            fk[0].push_back(x) ;
        else if ( tmp >= 0 && tmp <= k ) 
            fk[1].push_back(x) ; 
        else 
            fk[2].push_back(x) ; 
    }
    for ( i = 0 ; i < 3 ; i++ ) {
        for ( j = 0 ; j < fk[i].size() ; j++ ) {
            if ( f ) 
                printf("%05d\n",fk[i][j]) ; 
            printf("%05d %d ",fk[i][j],p[fk[i][j]].num) ; 
            f = 1 ; 
        }
    }
    printf("-1\n") ; 
    return 0 ; 
}
#include<cstdio>
#include<algorithm>
#include<map>
#include<string> 
#include<iostream> 
using namespace std ; 

struct SC {
    string name ; 
    int score, num ; 
} ; 

bool cmp ( struct SC a, struct SC b) {
    if ( a.score != b.score ) 
        return a.score > b.score ;
    if ( a.num != b.num ) 
        return a.num < b.num ; 
    return a.name < b.name ; 
}

int main() {
    int n, i, t, index = 0, now ; 
    scanf("%d",&n) ; 
    map<string,int> m ; 
    char id[7] ; 
    string sname ; 
    struct SC *sc = new struct SC [n+1] ; 
    for ( i = 0 ; i < n ; i++ ) {
        scanf("%s %d",id,&t) ; 
        cin >> sname ;  
        transform(sname.begin(),sname.end(),sname.begin(),::tolower) ; 
        if ( m.count(sname) == 0 ) {
            now = m[sname] = index++ ; 
            sc[now].num = sc[now].score = 0 ; 
            sc[now].name = sname ; 
        }
        else 
            now = m[sname] ; 
        if ( id[0] == 'B' ) 
            t = (int)(t/1.5) ; 
        if ( id[0] == 'T' ) 
            t = (int)(t*1.5) ; 
        sc[now].score += t ; 
        sc[now].num++ ; 
    }
    sort(sc,sc+index,cmp) ; 
    now = 1 ; 
    printf("%d\n",index) ; 
    for ( i = 0 ; i < index ; i++ ) {
        if ( i != 0 && sc[i].score != sc[i-1].score ) 
            now = i + 1 ; 
        printf("%d %s %d %d\n",now,sc[i].name.c_str(),sc[i].score,sc[i].num) ; 
    }
    return 0 ; 
}
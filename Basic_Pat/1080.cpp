#include<vector>
#include<algorithm>
#include<iostream>
#include<map> 
using namespace std ; 
typedef struct st {
    string name ;
    int gb, gz, gm, g ; 
} ; 
int cmp(st a, st b) {
    if ( a.g != b.g ) 
        return a.g > b.g ; 
    return a.name < b.name ; 
}
int main() {
    int b, z, m, i ,j, tmp ; 
    string n ; 
    map<string,int> help ; 
    cin >> b >> z >> m ; 
    vector<st> sts ; 
    for ( i = 0 ; i < b ; i++ ) {
        cin >> n >> tmp ; 
        if ( tmp < 200 || tmp > 900 ) 
            continue ; 
        st one ; 
        one.name = n ; 
        one.gb = tmp ; 
        one.gz = one.gm = -1 ; 
        sts.push_back(one) ; 
        help[n] = sts.size()-1 ; 
    } 
    for ( i = 0 ; i < z ; i++ ) {
        cin >> n >> tmp ; 
        if ( help.count(n) == 0 ) 
            continue ; 
        int index = help[n] ; 
        sts[index].gz = tmp ; 
    }
    for ( i = 0 ; i < m ; i++ ) {
        cin >> n >> tmp ; 
        if ( help.count(n) == 0 ) 
            continue ; 
        int index = help[n] ; 
        sts[index].gm = tmp ; 
    } 
    int len = sts.size() ; 
    for ( i = 0 ; i < len ; i++ ) {
        if ( sts[i].gm >= sts[i].gz ) 
            sts[i].g = sts[i].gm ; 
        else {
            float k = sts[i].gz * 0.4 + sts[i].gm * 0.6 + 0.5 ; 
            sts[i].g = (int)k ; 
        }
    } 
    sort(sts.begin(),sts.end(),cmp) ; 
    for ( i = 0 ; sts[i].g >= 60 ; i++ ) 
        cout << sts[i].name << " " << sts[i].gb << " " << sts[i].gz << " " << sts[i].gm << " " << sts[i].g << endl ; 
    return 0 ; 
}   
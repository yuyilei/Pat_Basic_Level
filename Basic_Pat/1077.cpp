#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std ; 
int main(){
    int n, m, i, j, t, q ; 
    cin >> n >> m ; 
    vector<int> res ; 
    for ( i = 0 ; i < n ; i++ ) {
        cin >> t ; 
        vector<int> tmp ; 
        for ( j = 0 ; j < n - 1 ; j++ ) {
            cin >> q ; 
            if ( q >= 0 && q <= m )
                tmp.push_back(q) ; 
        } 
        sort(tmp.begin(),tmp.end()) ; 
        int sum = accumulate(tmp.begin(),tmp.end(),0) ; 
        sum = sum - tmp[0] - tmp[tmp.size()-1] ; 
        sum /= (tmp.size()-2) ; 
        float z = ( sum + t ) / 2.0 + 0.5 ; 
        res.push_back(int(z)) ; 
    }   
    for ( i = 0 ; i < n ; i++ ) 
        cout << res[i] << endl ; 
    return 0 ; 
}
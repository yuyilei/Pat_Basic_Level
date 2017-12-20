#include<iostream>
using namespace std ; 
int main() {
    int n, i , j ; 
    string res, tmp ; 
    cin >> n ; 
    for ( i = 0 ; i < 4*n ; i++ ) {
        cin >> tmp ; 
        if ( tmp[2] == 'T') 
            res += ( tmp[0] - 'A' + '1') ; 
    }
    cout << res << endl ; 
    return 0  ; 
}
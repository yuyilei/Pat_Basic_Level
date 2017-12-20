#include<iostream>
#include<string>
using namespace std ; 
string all ; 
void D() {
    for ( int i = 0 ; i < all.length() ; i++ ) {
        int sum = 0 ; 
        while ( all[i] >= '0' && all[i] <= '9' ) 
            sum = sum*10 + all[i++]-'0' ; 
        for ( int j = 0 ; j < sum ; j++ ) 
            cout << all[i] ; 
        if ( sum == 0 ) 
            cout << all[i] ; 
    }
}
void C() {
    for ( int i = 0, j = 0 ; j < all.length() ; ) {
        while ( all[i] == all[j] ) 
            j++ ; 
        if ( j - i > 1 ) cout << j - i ; 
        cout << all[i] ; 
        i = j ; 
    }
}
int main() {
    char f ; 
    cin >> f ; 
    getchar() ; 
    getline(cin,all) ; 
    if ( f == 'D' ) 
        D() ; 
    else 
        C() ; 
    cout << endl ; 
    return 0 ; 
}
#include<iostream>
#include<algorithm>
using namespace std ;
int main() {
    string a ; 
    int i, j ; 
    cin >> a ; 
    for ( i = 0 ; i < 10 ; i++ ) {
        int last = 0, len = a.length(), flag = 0 ; 
        string b = "" ; 
        for ( j = 0 ; j < len ; j++) {
            if ( a[j] != a[len-1-j] ) 
                flag = 1 ; 
            int tmp = a[j] + a[len-1-j] - 2*'0' ; 
            b += ((tmp + last )% 10 + '0') ;  
            last = (tmp + last ) / 10 ;
        }
        if ( flag == 0 ) {
            cout << a << " is a palindromic number." << endl ; 
            return 0 ; 
        }
        if ( last != 0 )  
            b += (last + '0') ; 
        cout << a << " + " ; 
        reverse(a.begin(),a.end()) ; 
        reverse(b.begin(),b.end()) ; 
        cout << a << " = " << b << endl ; 
        a = b ; 
    }
    cout << "Not found in 10 iterations." << endl ; 
    return 0 ; 
}
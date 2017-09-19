#include<cstdio>
#include<iostream> 
using namespace std ;
int main() {
    int all , m , n1 , n2 , b , t ; 
    cin >> all >> m ; 
    for ( int i = 0 ; i < m ; i++ ){
        cin >> n1 >> b >> t >> n2 ; 
        if ( all <= 0 ) {
            cout << "Game Over." << endl ; 
            return 0 ; 
        } 
        if ( t > all ) 
            cout << "Not enough tokens.  Total = " << all << "." << endl ; 
        else if (((n1 > n2 )&& b == 0 )|| ((n1 < n2 ) && b == 1 ) ) {
            all += t ; 
            cout << "Win " << t << "!  " << "Total = " << all << "." << endl ; 
        } 
        else {
            all -= t ; 
            cout << "Lose " << t << ".  " << "Total = " << all << "." << endl ;  
        }
    } 
    return 0 ;
}
#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std ; 
int main() {
    int num[20] , n = 0 , i , j , tmp , res[22] = {0} , len1 , len2 , last = 0 , k = 0 , tmp2 ;  
    char temp , a[21] , b[21] ; 
    scanf("%c",&temp) ; 
    while ( temp != '\n' ){
        num[n++] = (temp-'0') ; 
        scanf("%c",&temp) ; 
    }    
    n-- ; 
    cin >> a >> b ; 
    len1 = strlen(a) ; 
    len2 = strlen(b) ; 
    for ( i = len1 - 1 , j = len2 - 1 ;  ; i-- , j-- , k++ , n--  ){
        if ( i < 0 && j < 0 ) 
            break ;
        int c = ( i >= 0 ) ? ( a[i] - '0' ) : 0 ; 
        int d = ( j >= 0 ) ? ( b[j] - '0' ) : 0 ; 
        tmp2 = ( num[n] != 0 ) ? num[n] : 10 ;  
        tmp = c + d ; 
        res[k] = (last+tmp) % tmp2 ; 
        last = (tmp+last) / tmp2 ; 
    }
    if ( last ) 
        res[k] = last ; 
    while ( res[k] == 0 && k >= 0 ) k-- ;  
    if ( k < 0 && res[0] == 0 ) 
        cout << 0 ; 
    for  ( i = k  ; i >=0  ; i-- )  {
        cout << res[i] ;
    } 
    cout << endl ; 
    return 0 ; 
}
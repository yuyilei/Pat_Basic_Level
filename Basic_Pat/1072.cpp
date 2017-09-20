#include<cstdio>
#include<iostream>
using namespace std ; 
int main() {
    int st , th , i , j , in[10000] = {0} , all = 0 , num = 0 , tmp , temp , flag ; 
    char name[5] ; 
    cin >> st >> th ; 
    for ( i = 0 ; i < th ; i++ ) {
        cin >> tmp ;  
        in[tmp] = 1 ;  
    } 
    for ( i = 0 ; i < st ; i++ ){
        cin >> name >> tmp ; 
        for ( j = 0 , flag = 0 ; j < tmp ; j++ ){
            cin >> temp ; 
            if ( in[temp] == 1 ){
                num++ ; 
                if ( flag == 0 ) {
                    cout << name << ":" ; 
                    flag = 1 ; 
                    all++ ;
                }
                printf(" %04d",temp) ; 
            }
        }
        if ( flag )
        cout << endl ; 
    }   
    cout << all << " " << num << endl ; 
    return 0 ; 
}
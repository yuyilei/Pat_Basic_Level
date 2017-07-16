#include<iostream>
#include<string>

using namespace std ;

int main() {

    string password ;
    int n ; 
    int count = 0 ;
    string pass ;
    char c ; // 用来接收一个字符的 

    cin >> password >> n ; 

    getchar() ; // 缓冲 , 害怕,为什么不可以 QAQ !!! 

    while ( true ) {
    
        getline(cin,pass) ;
        
        if ( pass != "#"){
        
            count++ ;
        }

        else {
        
            break ;
        }

        if ( count <= n && password == pass ) {

             cout << "Welcome in" << endl ;
             break ;
        } 
        
        else if ( count <= n && password != pass ) {
        
            cout << "Wrong password: " << pass << endl ;
        }

        if ( count == n ){
        
            cout << "Account locked" << endl ;
        }
    }

    return 0 ;
}

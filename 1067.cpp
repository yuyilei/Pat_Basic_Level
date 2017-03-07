#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std ;

int main () {

    int number ;
    string password ;

    cin>>password ;
    cin>>number ;
    
    int i = 0 ; 
    string res[number] ;
    int flag = 0 ;
    int key = 0 ;
    int t = 0 ;

    while ( true ){
    
        string pass ;
        cin >> pass ;
        if ( pass == "#" ) 
            break ;

        if ( i < number && pass == password ){
        
            res[t++] = "Welcome in" ;
            flag = 1 ;
            key = i ;
//            cout<<"i"  << i <<endl ; 
        }
        
        if ( i < number && pass != password ) {
        
            res[t++] = "Wrong password: "  + pass ;
        }

        i += 1 ;
    }
    
    if ( flag == 1 ){
    
       for ( int j = 0 ; j <= key ; j++) 
           cout<<res[j]<<endl;
    } 

    else  {
    
        number = ( i > number ) ? number : i ; 
        for ( int j = 0 ; j < number ; j++)
            cout<<res[j]<<endl;
        if ( number != i ) 
            cout<<"Account locked"<<endl ;
    }

    return 0 ;

}

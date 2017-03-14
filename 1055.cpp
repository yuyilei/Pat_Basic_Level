#include<iostream>
#include<deque>
#include<algorithm>
#include<string>

using namespace std ;

struct Student {

    string name ;
    int height ;
}  ;

int cmp( struct Student a , struct Student b ){

    if ( a.height != b.height ) {
    
        return a.height > b.height ;  // 身高降序 
    }

    else 
        return a.name  < b.name  ; // 名字升序
}

int main() {

    int number ;
    int line ; 
    cin >> number ;
    cin >> line ; 
    int i ; 
    struct Student *p = new struct Student [number] ;

    for ( i = 0 ; i < number ; i++){
        int height1 ;
        string name1 ;
        cin >> name1 ;
        cin >> height1 ;
        p[i].name = name1 ;
        p[i].height = height1 ;
     }

    sort(p,p+number,cmp) ;

    int every = number / line ;
    int last = every + number % line ;

    int j = line ; 
    int t = 0 ;
    int index ;

    while ( line > 0 ) {
    
        deque <string> out ;
        if ( line == j ) {
            out.push_back(p[t++].name) ;
            for ( i = t ; i < last  ; i++ ){
                 if ( i % 2 == 0){
                 
                     out.push_back(p[i].name) ;
                 }
                 else {
                 
                     out.push_front(p[i].name) ;
                 }
                 t++ ;
            } 
           index = t ;
           line-- ; 

           while (out.size() > 1 ){
           
               cout << out.front() << " " ;
               out.pop_front() ;
           }
           cout << out.front() << endl ;
           out.clear() ;
        }

        else {
            deque <string> out ;
            out.push_back(p[t++].name) ;
            for ( i = t ; i < index + every ; i++ ) {
            
                if ( (i-index) % 2 == 0 ){
                
                    out.push_back(p[i].name) ;
                }
                else {
                
                    out.push_front(p[i].name) ;
                }
                t++ ;
            }
            index = t ;
            line-- ;
            while(out.size() > 1){
            
                cout << out.front() << " " ;
                out.pop_front() ;
            }
            cout << out.front() << endl ;
            out.clear() ;
        }
        
    }
    return 0 ; 
}

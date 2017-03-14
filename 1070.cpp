#include<iostream>
#include<functional>
#include<queue>
#include<vector>

using namespace std ;

int main() {

    int n ;
    cin >> n ;
    priority_queue<int , vector<int> , greater<int> > q ; // greator是比较函数,从小到大 , 改为less , 则是从大到小 
    
    int i ;
    for ( i = 0 ; i < n ; i++){
    
        int temp ;
        cin >> temp ;
        q.push(temp) ;
    }

    while (q.size() > 1){
    
        int a ;
        int b ;
        a = q.top() ;
        q.pop() ;
        b = q.top() ;
        q.pop() ;
        q.push((a+b)/2) ;
    } 
    
    
        cout << q.top() << endl ;

    return 0 ; 
}

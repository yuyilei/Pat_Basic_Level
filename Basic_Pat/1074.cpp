#include<cstdio>
#include<iostream>
using namespace std ; 
int main() {
    int num[20] , n = 0 , i , tmp ; 
    char temp ; 
    scanf("%c",&temp) ; 
    while ( temp != '\n' ){
        num[n++] = (temp-'0') ; 
        scanf("%c",&temp) ; 
    }    
    
}
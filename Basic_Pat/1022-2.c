#include<stdio.h>
int main(){

    long long a ;
    long long b ;
    int  n ;
    long long sum  ;
    long long res = 0 ;
    long long c = 1 ;
    long long h = 0 ;

    scanf("%lld %lld %d",&a,&b,&n) ;

    sum = a + b ;

    while ( sum > 0 ){
    
        h = sum % n ;
        sum /= n ;
        res += h*c ;
        c = c*10 ;
    }

    printf("%lld",res) ;
    
    return 0 ;
}

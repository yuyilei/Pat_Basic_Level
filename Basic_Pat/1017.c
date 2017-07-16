#include<stdio.h>
#include<string.h>
int main(){

    int n ;
    char a[1000] = {' '} ;
    int i ;
    int r ;
    int q ;
    int len ;
    char k[1000] = {'a'} ;
    int len2 ;

    scanf("%s %d",a,&n) ;
    
    len = strlen(a);

    for ( i = 0 ; i < len ; i++){
        a[i] = a[i] - '0' ;
        k[i] = a[i] / n ;
        if ( i < len -1 )
            a[i+1] += 10*(a[i] % n ) ; 
        else
            r = a[i] % n ;
    }
    

    if ( len == 1 && (int)a[0] < n )  // 针对 3 4 这样的输入
        printf("0") ;

    if( k[0] != 0 && len >1 )   // 使第一位不是0
        printf("%d",k[0]) ;

    for ( i= 1 ; k[i] != 'a' && i < len ; i++)
        printf("%d",k[i]) ;
    printf(" %d",r) ;
    return 0 ;
   
}

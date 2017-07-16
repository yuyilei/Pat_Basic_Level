#include<stdio.h>
#include<string.h>
int main(){

    char a[1000] ;
    int i ;
    int b[127] = {0};
    int len ;
    int max ;
    char  c ;

    gets(a) ;
    len = strlen(a) ;

    for( i = 0 ; i < len ; i++ )
        a[i] = tolower(a[i]) ;   // 全部转化为小写

    for ( i = 0 ; i < len ; i++ )
        if ( 'a' <= a[i] && 'z' >= a[i])
            b[(int)a[i]]++ ;

    max = b[97] ;
    c = 'a' ;
    for ( i = 98 ; i <= 122 ; i++ )
        if ( max < b[i] ) { 
            max = b[i] ;
            c  = (char)i ;
        }
    printf("%c %d",c,max) ;
    return  0 ;
    
}

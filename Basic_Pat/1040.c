#include<stdio.h>
#include<string.h>

int main(){

    char n[100000]  ;
    int T = 0, AT = 0, PAT = 0, i ; 
    scanf("%s",n) ;
    int len = strlen(n) ;
    for ( i = len - 1 ; i >= 0 ; i-- ) {
        if ( n[i] == 'T' ) 
            T++ ;                                     // 遇到T，加一  
        else if ( n[i] == 'A' ) 
            AT = ( AT + T ) % 1000000007 ;            // 遇到A，AT的个数就是AT+T
        else 
            PAT = ( PAT + AT ) % 1000000007 ;         // 遇到P， PAT的个数就是PAT+AT 
    } 
    printf("%d\n",PAT) ; 
    return 0 ; 
          
} 

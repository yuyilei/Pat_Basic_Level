#include<stdio.h>
#include<string.h> // 完全说反话

int main(){


    char str[200] , ch ; 
    char *p , *q ; 

    gets(str) ;
    p = str ; 

    q = p + strlen(p) - 1 ;

    while ( p < q ){
    
        ch = *p ;
        *p++ = *q ;
        *q-- = ch ;
    }

    printf("%s\n" ,str) ; 
    return 0 ; 
}

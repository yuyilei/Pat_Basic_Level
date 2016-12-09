/*到底买不买*/

#include<stdio.h>
#include<string.h>
int main (){

    char a[1000] ;
    char b[1000] ;
    int  number1[128] = {0} ;
    int  number2[128] = {0} ;
    int  i ; 
    int  j ;
    int  len1 ;
    int  len2 ;
    int  sum = 0 ;

    scanf ("%s",a) ;
    scanf ("%s",b) ;

    len1 = strlen(a) ;
    len2 = strlen(b) ;

    for (  i = 0 ; i < len1 ; i ++)
        number1[(int)a[i]] ++ ;
    
    for (  i = 0 ; i< len2 ; i++)
        number2[(int)b[i]] ++ ;
    
    for ( i = 0 ; i < 128 ; i ++){
    
        if ( number1[i] < number2[i])
            sum += number2[i] - number1[i] ;
    }

    if  ( sum > 0 )
        printf("No %d",sum) ;

    else 
        printf("Yes %d",len1 - len2) ;
}

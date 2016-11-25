/*各位数统计*/

#include<stdio.h>
int main(){

    char  a[1000] = " ";  /*字符数组才能这样全部初始化*/
    int  b[10]  ; /*该数组的初始化必须要一个一个来*/
    int  j ; 
    int  i ;

    scanf("%s",a);

    for ( i= 0 ; i <= 9 ; i++)
        b[i] = 0 ;     /*对数组进行赋值*/

    for( i  = 0 ; a[i] != '\0' ; i++ ){
    
        switch ( a[i] ){
        
            case '0' : b[0]++ ; break ;
            case '1' : b[1]++ ; break ;
            case '2' : b[2]++ ; break ;
            case '3' : b[3]++ ; break ;
            case '4' : b[4]++ ; break ;
            case '5' : b[5]++ ; break ;
            case '6' : b[6]++ ; break ;
            case '7' : b[7]++ ; break ;
            case '8' : b[8]++ ; break ;
            case '9' : b[9]++ ; break ;

        }
    
    }

     for ( i = 0 ; i <= 9 ; i ++)
         if ( b[i] != 0)
         printf("%d:%d\n",i ,b[i] );
     return 0 ;
    

}

/*划拳*/

#include<stdio.h>

int main(){

    int a = 0  ;
    int b = 0  ;
    int  n ; 
    int number[4] ;
    int i ;
    int j ;
    int q1 ;
    int q2 ;
    int q3 ;
    int q0 ;

    scanf("%d",&n) ;

    for( i = 0 ; i < n ; i++){
      for ( j  = 0 ; j < 4 ; j++)
        scanf("%d",&number[j]);
      q0 = number[0] ;
      q1 = number[1] ;
      q2 = number[2] ;
      q3 = number[3] ;
        if (q0 + q2 == q1 && q0 +q2 != q3)
           b++ ;
          
        else if ( q0 + q2 == q3 && q0 + q2 != q1)
           a++ ;
    }
    printf("%d %d",a,b);
    return  0 ;
}

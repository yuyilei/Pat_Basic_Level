 /*输入两个数字，显示其间的数字，并算他们的和*/
/*注意每五个数字要换行*/

#include<stdio.h>

int main(){
 
    int a = 100 ;
    int b = 100 ;
    int sum = 0 ;
    int  i ;
    int  j ;
    
     do {
      
         scanf("%d %d" ,&a ,&b) ;
     } while ( !(-100<= a <= b <= 100)) ;

     for( i = a ; i<= b ; i++ ) {
           sum += i;
          printf("%5d",i);
        if ((i -a +1 )%5 == 0)  
           printf("\n"); 
     }
     printf("\n");
     printf("Sum = %d",sum);
     return  0 ;
    
}

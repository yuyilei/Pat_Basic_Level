 /*用给定的数字做一个尽量大的沙漏*/
#include<stdio.h>
int main(){
   int n , i,  j , q , t ;

   printf("请输入一个整数\n");
   scanf("%d" ,&n);

   for (i =0 ; n >2*(i+1)*(i+1) -1 ;i++);
   for ( j = 0 ; j < i ; j++){
      for ( q = 0 ; q < j ; q++)
          printf(" ");
      for (t =2*i - 2*j -1 ;t> 0;t--)
          printf("*");
      printf("\n") ;

   }
   for( j =0 ;j< i-1; j++) {
       for ( q =0 ;q < i-j -2;q++)
           printf(" ");
       for ( t =2*j +3 ;t>0 ;t--)
           printf("*");
       printf("\n") ;

    }
    for( j =0 ;j< n -2*i*i+1 ;j++)
        printf("*");
    printf("\n");
    return 0;
}

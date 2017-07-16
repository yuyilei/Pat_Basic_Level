#include<stdio.h>
int main(){
   int n , i,  j , q , t ;
   char k ; 

   scanf("%d %c" ,&n ,&k);
   if (n == 1) {
       printf("%c\n", k);
       printf("0");
   }
   else {
        for (i =0 ; n >2*(i+1)*(i+1) -1 ;i++);
        for ( j = 0 ; j < i ; j++){
              for ( q = 0 ; q < j ; q++)
                  printf(" ");
              for (t =2*i - 2*j -1 ;t> 0;t--)
                  printf("%c",k);
              printf("\n") ;
        
           }
        for( j =0 ;j< i-1; j++) {
               for ( q =0 ;q < i-j -2;q++)
                   printf(" ");
               for ( t =2*j +3 ;t>0 ;t--)
                   printf("%c",k);
               printf("\n") ;
        
            }
        
         printf("%d",n - 2*i*i+1) ;
     }
    //printf("\n");
    return 0;
}


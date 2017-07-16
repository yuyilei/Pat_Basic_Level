/*换个格式输数字*/

#include<stdio.h>
int main (){

    int i ;
    char a[3] = " "  ;
    int j ;
    int  n ;
    int q ;
    int k ;
   
    scanf("%s", a);

   if ( a[2] != '\0'  && a[1] != '\0' && a[0] != '\0'){
    for ( i  = 0  ; i < 2 ; i++){
    
        for (  j = (int)(a[i] - 48) ; j > 0 ;  j--){
           if ( i < 2) {
            switch (i) {
             case 0 : printf("B");   break ;
             case 1 : printf("S");   break ;
             
             }
           }
         } 
      }   
            n = (int)(a[2] - 48) ;
           for ( q = 1 ;q <= n ;q++){
             printf("%d", q);
        }
   }

   else  if ( a[2] == '\0' && a[1] != '\0' && a[0] != '\0'){
       k = (int)(a[0] - 48) ;
        for( i =  k  ; i > 0 ; i--)
            printf("S");
       
       n = (int)(a[1] -48)  ;
        for( i = 1 ; i <= n ; i++)
            printf("%d",i);
       
   }
   
   else if ( a[2] == '\0' && a[1] == '\0' && a[0] != '\0'){
       n = (int)(a[0] - 48);
       for( i =1 ; i <= n ; i++)
           printf("%d",i);
   }   
    return 0 ;
}

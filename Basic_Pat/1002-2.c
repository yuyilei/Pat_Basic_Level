#include<stdio.h>

int main(){
    char input[100];
    int  sum =0  ;
    int i =0  ;
    int j =0  ; 
    int a[3] = {-1, -1, -1};
     
    scanf("%s", input);

   for ( i = 0; input[i] != '\0' ; i++){
         sum += (int)(input[i] - 48 ); 
   }

   for (j= 0; sum > 0 ; j ++){
       a[j] = sum % 10 ;
       sum /= 10 ; 
   }       
   for(j=2; j>0; j--) {
        switch (a[j]){
            case 0 : printf("ling ");  break ;
            case 1 : printf("yi ");    break ;
            case 2 : printf("er ");    break ;
            case 3 : printf("san ");   break ;
            case 4 : printf("si ");    break ;
            case 5 : printf("wu ");    break ;
            case 6 : printf("liu ");   break ;
            case 7 : printf("qi ");    break ;
            case 8 : printf("ba ");    break ;
            case 9 : printf("jiu ");   break ;
        }
    }
    switch (a[0]){
           case 0 : printf("ling");  break ;                      
           case 1 : printf("yi");    break ;                      
           case 2 : printf("er");    break ;                      
           case 3 : printf("san");   break ;                      
           case 4 : printf("si");    break ;                      
           case 5 : printf("wu");    break ;                      
           case 6 : printf("liu");   break ;                      
           case 7 : printf("qi");    break ;                      
           case 8 : printf("ba");    break ;                      
           case 9 : printf("jiu");   break ;
    }
          
return 0 ;
}


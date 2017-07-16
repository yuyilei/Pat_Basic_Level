/*念数字*/

#include<stdio.h>
int main(){
  
    char   n[1000] ;
    int  i = 0  ;

    scanf("%s", n);

    

    while (n[i] != NULL ){
        switch (n[i]) {
         
            case '-' : printf(" fu ") ;break ;
            case '0' : printf(" ling ") ;break ;
            case '1' : printf(" yi ") ;break ;
            case '3' : printf(" san ") ;break ;
            case '4' : printf(" si ") ;break ;
            case '5' : printf(" wu ") ;break ;
            case '6' : printf(" liu ") ;break ;
            case '7' : printf(" qi ") ; break ;
            case '8' : printf(" ba ") ;break ;
            case '9' : printf(" jiu ") ;break ;           
        }
            i++;
      }
     printf("\n");
    return 0;
   }


#include<stdio.h>

int main(){
    char input[100] ;
    long sum = 0 ;
    int i =0 ;
    int j = 0; 
    char a[100]  ;
    
   scanf("%c",&input);

   for ( i = 0; input[i] ; i ++){
   
       sum += a[i] ;
   }

   for (  j= 0; sum > 0 ; j ++){
      
       a[j] = sum % 10 ;
       sum /= 10 ; 
   }       
   while ( a [j] != NULL ){
          if ( j != 0) {
                  switch ( a [j--] ){
                    
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
          else {
          switch ( a [j] ){                                           
                                                                                          
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
          
          }
    
}

return 0 ;
}


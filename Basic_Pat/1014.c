#include<stdio.h>
#include<string.h>
int main(){

    int i ;
    char a[60] ;
    char b[60] ;
    char c[60] ;
    char d[60] ;
    int  number1[26] = {0} ;
    int  number2[24] = {0} ;
    int  number3[52] = {0} ;
    int  len1 = 0 ;
    int  len2 = 0 ;
    int  len3 = 0 ;
    int  len4 = 0 ;
    int  j ;
    int  mark1 = -1 ;
    int  mark2 = -1 ;
    int  mark3 = -1 ;

    scanf("%s %s %s %s",a,b,c,d) ;

    len1 = strlen(a) ;
    len2 = strlen(b) ;
    len3 = strlen(c) ;
    len4 = strlen(d) ; 

    for ( i = 0 ; i < len1 ; i++){
    
        if ( 'A' <= a[i] && a[i] <= 'Z' && mark1 < 0  ) {
            number1[(int)(a[i] - 'A')] ++ ;
            for ( j = 0 ; j < 7 ; j++){
            
                if ( number1[j]== 2 )
                    mark1 = j  ;
            }   
       }
 }
     if ( mark1 < 0){
     
         for ( i = 0 ; i < len2 ; i ++){
         
             if ('A' <= b[i] && 'Z' >= b[i] && mark1 < 0)
                 number1[(int)(b[i] - 'A')] ++ ;
             for ( j = 0 ; j < 7 ; j++)
                 if ( number1[j] == 2)
                     mark1 = j ;
         }
     }

     for ( i = 0 ; i < len1 ; i++){
     
/*         if ( '0' <= a[i] && '9' >=a[i] && mark2 <0 && i != mark1) {
             number2[(int)(a[i] - '0')] ++ ;
             for ( j = 0 ; j < 24 ; j++)
                 if ( number2[j] == 2 )
                     mark2 = j ;
         }
*/
         if ( 'A' <= a[i] && 'N' >= a[i] && mark2 <0  && i != mark1 ){
             number2[(int)(a[i] - 'A') + 11 ] ++ ;
             for ( j = 0; j < 24 ; j++)
               if ( number2[j] == 2 )
                 mark2 = j ;
         }  
     }

     if ( mark2 < 0){
     
         for ( i = 0 ; i < len2 ; i++){
         
  /*           if ( '0' <= b[i] && '9' >= b[i] && mark2 < 0 && i != mark1){
             
                 number2[(int)(a[i] - '0')] ++ ;
                 for ( j = 0 ; j < 24 ; j++)
                     if ( number2[j] == 2 )
                       mark2 = j ; 
            }
    */
             if( 'A' <= b[i] && 'N' >= b[i] && mark2 < 0 && i != mark2 ){
             
                 number2[(int)(b[i] - 'A') + 11 ]++ ;
                 for ( j = 0 ; j < 24 ; j++ )
                     if ( number2[j] == 2 )
                         mark2 = j ;
             }
         }
     }

     for ( i = 0 ; i < len3 ; i++){
     
        if ( 'a' <= c[i] && 'z' >= c[i] && mark3 < 0 ){
            number3[(int)(c[i] - 'a')] ++ ;
            for ( j = 0 ; j < 52 ; j++ )
                if ( number3[j] == 2)
                    mark3 = i ;
        }
        
        if ( 'A' <= c[i] && 'Z' >= c[i] && mark3 < 0){
        
            number3[(int)(c[i] - 'A') +26] ++ ;
            for ( j = 0 ;  j < 52 ; j++)
                if ( number3[j] == 2)
                    mark3 = i  ;
        }
   }

     if ( mark3 < 0 ){
     
         for ( i = 0 ; i < len4 ; i++ ){
         
             if ( 'a' <=d[i] && 'z' >=d[i] && mark3 < 0){
             
                 number3[(int)(d[i] - 'a')] ++ ;
                 for ( j = 0 ; j < 52 ; j++)
                     if ( number3[j] == 2)
                         mark3 = i + len3 ;
             }

             if ( 'A' <=d[i] && 'Z' >=d[i] && mark3 < 0){
             
                 number3[(int)(d[i] - 'A') + 26] ++ ;
                 for  ( j = 0 ; j < 52 ; j++)
                     if ( number3[j] == 2)
                         mark3 = i + len3 ;
             }
         }
     }
  // printf("%d %d %d \n",mark1 ,mark2 ,mark3) ;
     switch ( mark1 ){
     
         case 0 : printf("MON ") ;break ;
         case 1 : printf("TUE ") ;break ;
         case 2 : printf("WED ") ;break ;
         case 3 : printf("THU ") ;break ;
         case 4 : printf("FRI ") ;break ;
         case 5 : printf("SAT ") ;break ;
         case 6 : printf("SUN ") ;break ;
     }

    printf("%02d:",mark2) ;
    printf("%02d",mark3) ;
   return 0; 
}

/*旧键盘*/

#include<stdio.h>
#include<ctype.h>


int main () {

    char input1[80]  ;
    char input2[80]  ;
    int  b[127]  =  {0} ;
    int  j ;
    int  i ;

    scanf("%s",input1) ;
    scanf("%s",input2) ;
    
    j = 0 ;
    for ( i = 0 ;  input1[i] != '\0' ; i++ ) {
        if ( input1[i] == input2[j]) 
            j++ ;
        
        else{ 
            if ( (int)input1[i] >=65 && (int)input1[i] <=90 ){
                if ( b[(int)input1[i]] == 0 && b[(int)input1[i] + 32] == 0){
            b[(int)input1[i]] = 1 ;
            b[(int)input1[i] +32] = 1 ;
            printf("%c",toupper(input1[i])) ;
              }
          }    
          else  if ( (int)input1[i] >=97 && (int)input1[i] <=122) {
                if  (  b[(int)input1[i]] == 0 && b[(int)input1[i] -32] == 0 ) {
                
            b[(int)input1[i]] = 1 ;
            b[(int)input1[i] - 32 ]  = 1 ;
            printf("%c",toupper(input1[i]));    
                   }
                }
            else {
            
                if ( b[(int)input1[i]] == 0) {
                    b[(int)input1[i]] = 1 ;
                    printf("%c",input1[i]) ;
              }
           }
        }
     }
   return 0 ;
}

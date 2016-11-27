/*说反话*/
#include<string.h>
#include<stdio.h>
int main(){

    char a[80] ;
    int k ;
    int i ;
    int j ;
    int t ;
    int n[80] = {0} ;
  
    gets(a) ;
    
    n[0] = strlen(a) ;
    j = 1 ;
   
    for ( i = strlen(a) ; i > 0 ; i--) {
        if ( a[i] == ' '){
            n[j++] = i ;
        }       
    }

     t = j ;
   for ( j = 0 ; n[t] != j-1 ; j++) {
       if ( a[j] == ' ')
           n[t] = j;
   } 
    j = 0 ; 
    for ( i = strlen(a) ; i >= 0 ; i--){
        if ( a[i] == ' ' && n[j] > 0){
            if ( j == 0) {
            
                for ( k = i + 1 ; k <= n[j] ; k++ ){
                    printf( "%c",a[k]) ;
                }    
                    j ++ ; 
                    printf(" ") ;

            }
            else if ( j > 0 && n[j + 1] > 0 ){
              for ( k = i + 1; k <= n[j] ; k++){
                printf("%c",a[k]) ;
            }
               j++ ;
         }
            else if ( j > 0 && n[j + 1] == 0){
            
                for ( k = 0 ; k <= n[j] ;  k++) {
                
                    printf("%c",a[k]) ;
                }
                j++ ;
            }
       } 
    }

    return 0 ;
}


#include<stdio.h>

int main (){

    char a[1000] = " ";
    int n[6];
    int i ;
    int max ;

    scanf("%s",a);
    
    for ( i = 0 ; i< 6 ;i++)
        n[i] = 0 ;

    for ( i = 0 ; a[i] != '\0' ; i++){
        
            switch ( a[i]) {
                    
                        case 'P' : n[0]++; break ;
                        case 'A' : n[1]++; break ;
                        case 'T' : n[2]++; break ;
                        case 'e' : n[3]++; break ;
                        case 's' : n[4]++; break ;
                        case 't' : n[5]++; break ;
                    }
        }

    max = n[0] ;
    for ( i = 0 ; i < 6 ; i++)
        if ( max < n[i])
            max  = n[i];

    for (  i = 0 ; i < max ; i++ ) {
     
     if ( n[0] != 0) {
         
         printf("P");
         n[0]-- ;
     }

     if  ( n[1] !=0) {
     
         printf("A");
         n[1]--;
     }

     if  ( n[2] != 0){
     
         printf("T");
         n[2]--;
     }

     if ( n[3] != 0){
     
         printf("e");
         n[3]--;
     }
          
     if ( n[4] != 0){
     
         printf("s");
         n[4]--;
     }

     if ( n[5] != 0){
     
         printf("t");
         n[5]--;
     }
    }

    return 0 ;

}


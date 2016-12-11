#include<stdio.h>
#include<string.h>
int main(){

    char a[20]  ;
    char b[20]  ;
    int  a1 = 0 ;
    int  a2 = 0 ;
    int  a3 = 0 ;
    int  b1 = 0 ;
    int  b2 = 0 ;
    int  b3 = 0 ;
    int  i ;
    int  j ;
    int  q ;
    int  len1 ;
    int  len2 ;

    scanf("%s %s",a,b) ;
    
    len1 = strlen(a) ;
    len2 = strlen(b) ;

     
      if ( a[0] != '0' ){
        for ( i = 0 ; a[i] != '/' ;i++) ;
        q = 1 ;
        for ( j = i -1; j >= 0 j -- ){
          
          a2 += (int)(a[i] - '0')*q ;
          q *= 10 ;
        }
        
        q = 1 ;
        for ( i = len1 -1 ; a[i] != '/' ;i--){
        
            a3 +=(int)(a[i] - '0')*q ;
            q *= 10 ;
        }
          
        if ( a2 >= a3 ){
        
            a1 = a2 / a3 ;
            a2 = a2 % a3 ;
        }
        if ( a2 != 0 ){
        for ( i = 2 ; i < a2 ; i++){
        
            if ( a2 % i == 0 && a3 % i == 0){
                a2 /= i ;
                a3 /= i ;
        }
      }
    }
  }
      if ( b[0] != '0'){
      
          for ( i = 0 ; b[i] != '/' ; i++) ;
          q = 1 ;
          for ( j = i -1 ; j >=0 ;j--){
          
              b2 += (int)(b[i] - '0')*q ;
              q *= 10 ;
          }

          q = 1 ;
          for ( i = len2 - 1 ; b[i] != '/' ; i--){
          
              b3 += (int)(b[i] - '0')* q ;
              q *= 10;
          }

          if ( b2 >= b3) {
          
              b1 = b2 / b3 ;
              b2 = b2 % b3 ;
          }

          if ( b2 != 0 ){
          
              for ( i = 2 ; i < b2 ; i++){
              
                  if ( b2 % i == 0 && b3 % i == 0) {
                  
                      b2 /= i ;
                      b3 /= i ;
                  }
              }
          }
      }
    
    
         if ( b[0] == '-') {
           for ( i = 1 ; b[i] != '/' ; i++) ;
           q = 1 ;
           for ( j = i -1 ; j >=1 ; j--){
           
               b2 +=(int)(b[i] - '0')*q ;
               q *= 10 ;
          }
           q = 1 ;
           for ( i = len2 - 1 ; b[i] ! ='-' ;i--){
           
               b3 +=(int)(b[i] - '0') ;
               q *= 10 ;
           }

           if ( b2 >= b3){
                b1 = b2 / b3 ;
                b2 = b2 % b3 ;
            }
            
           if ( b2 != 0 ){
               for( i = 2 ; i< b2 ;i++){
               
                   if ( b2 % i == 0 && b3 % i == 0){
                   
                       b2 /= i ;
                       b3 /= i ;
                   }
               }
           }
           
       }

         if ( a[0] == '-') {
         
             for ( i = 1 ; a[i] != '/' ; i++) ;
             q = 1 ;
             for ( j = i - 1 ; j >=1 ; j--){
             
                 a2 += (int)(a[i] - '0')*q ;
                 q *= 10 ;
             }

             for ( i = len1 - 1 ; a[i] != '/' ;i--){
             
                 a3 += (int)(a[i] - '0')*q ;
                 q *= 10 ;
             }

             if ( a2 >= a3 ){
             
                 a1 = a2 / a3 ;
                 a2 = a2 % a3 ;
             }

             if ( a2 != 0){
             
                 for ( i = 2 ; i < a2 ; i++){
                 
                     if ( a2 % i == 0 && a3 % i == 0 ){
                     
                         a2 /= i ;
                         a3 /= i ;
                     }
                 }
             }
         }

             if ( a[0] == '0' ){
             
                 if ()
             }

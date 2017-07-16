#include<stdio.h>
#include<string.h>
int main(){

    char a[100] ;
    char b[100] ;
    int  i ;
    int  len1 ;
    int  len2 ;
    char  c[100] ;
    int   d[100] ;
    int  j ; 
    int  q ;
    int  s = 0 ;
    int  e[100] ;

    scanf("%s %s",a,b) ;
    
    len1 = strlen(a) ;
    len2 = strlen(b) ;
//    printf("%d %d\n",len1 ,len2) ;    
    j = 1 ;
    q = len2 - len1  ;
//    printf("%d\n",q) ;
    for ( i = len2 - 1 ; i >= q ; i-- && j++ ){
        if ( j % 2 == 1 && i >= 0 ) {
            a[i-q] -= '0' ;
            b[i] -= '0' ;
            d[i] =((int)a[i-q] + (int)b[i] ) % 13 ;
     //        if ( d[i] >=0 && d[i] <= 9 )
     //           c[i] = (char)((d[i]) +'0') ;
            if ( d[i] > 9 ){
                if ( d[i] == 10 )
                    c[i] = 'J' ;
                else if ( d[i] == 11){
 //                    printf("1\n") ; 
                    c[i] = 'Q' ;
                }
                else if ( d[i] == 12)
                    c[i] = 'K' ;
            }
        }
        if ( j % 2 == 0 && i >= 0){
        
            a[i-q] -= '0' ;
            b[i] -= '0' ;
            d[i] = (int)(b[i]-a[i-q]) ;

            if ( d[i] >= 0 ) ;
       //         c[i] = (char)(d[i] + '0');
             if ( d[i] < 0)
                 d[i] += 10;
        //        c[i] = (char)((d[i] + 10 ) + '0');
        }

        if ( i < 0 ){
        
            if ( j % 2 == 1 )
                e[s++] = 10 - (int)(a[i-q] - '0') ;
            if ( j % 2 == 0 )
                e[s++] = (int)(a[i-q] - '0') ;

        }
    }

        if ( len2 >= len1 ){
        
            for ( i = 0 ; i < len2 - len1   ; i ++)
                printf("%c",b[i]) ;
            for ( i = len2 - len1 ; i < len2 ; i++){
                if ( d[i] > 9 )                
                printf("%c",c[i]) ;
                else 
                printf("%d",d[i]) ;
        }
     }
        if ( len2 < len1 ){
            
            for ( i = s-1 ; i >= 0 ;i--){
                if (e[i] < 10)
                printf("%d",e[i]) ;
                if (e[i] == 10)
                printf("0");
            }    
            for ( i = 0 ; i < len2 ; i ++){
              if ( d[i] > 9 )
                printf("%c",c[i]) ;
              else 
                printf("%d",d[i]) ;
            }

        } 
   return 0 ;
} 

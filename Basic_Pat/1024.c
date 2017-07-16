#include<stdio.h>
#include<string.h>
int main(){

    char a[100000] ;
    long len ; 
    long i ; 
    long mark ; 
    long e ;
    long j ;

    scanf("%s",a) ;

    if ( a[0] == '-') 
      printf("-") ;

    len = strlen(a) ;
  
    for ( i = 1 ; i < len ; i++ ){
     if ( a[i] == 'E')
         mark = i ;
    }
 //    printf("%ld",mark) ;    
    j = 1 ;
    e = 0 ;
    for ( i = len -1 ; i > mark + 1 ;i--){
    
        e += j * (int)(a[i] - '0' ) ;
        j = j * 10 ;
    }
//  printf("%ld",e) ;
 
  
    if ( a[mark+1] == '-'){
    
        printf("0.") ; 

        for ( j = 0 ; j < e - 1 ; j++)
            printf("0") ;

        for ( i = 1 ; i < mark ;i ++){
        
            if ( i != 2)
                printf("%c",a[i]) ;
        }
    }

    if ( a[mark+1] == '+' && e >= mark - 3){
    
        for ( i = 1 ; i < mark ;i ++)
            if ( i != 2 )
                printf("%c",a[i]) ;
        for ( i = 0 ; i < e + 3  - mark ; i ++)
            printf("0") ;
    }
  

  if ( e < mark - 3 && a[mark+1] == '+') {
 
   /*  if ( a[mark+1] == '-'){
         
         printf("0.") ;
         for ( j = 0 ; j < e - 3 ; j++)
              printf("0") ;
         for ( i = 1 ; i < e ; i++)
             if ( i != 2)
                 printf("%c",a[i]) ;
     }
  
     if ( a[mark+1] == '+'){
    */       
         for ( i = 1 ; i <= e + 2; i++) 
             if( i != 2 )
             printf("%c",a[i]) ;
         printf(".") ;
         for ( i = e + 3 ; i < mark ; i++)
             printf("%c",a[i]) ;

     }
 
    return 0 ;
}


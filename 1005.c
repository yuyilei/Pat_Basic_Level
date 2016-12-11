/*继续3n+1猜想*/
#include<stdio.h>

int main(){

    int n ;
    int i ; 
    int a[100] = {0} ;
 //   int b[100] = {0} ;
    int c[100] = {0} ;
    int t = 0 ;
    int j = 0 ;
    int res[100] = {0} ;

    scanf("%d\n",&n) ;
//    printf("%d",n) ;
    for(i = 0 ; i < n ; i++){
    
        scanf("%d" , &a[i]) ;
 //      printf("%d\n",a[i]) ;
     }
  //  printf("1\n") ;
    
    for ( i = 0 ; i < n ; i++){
 //        printf("1") ;
        c[i] = a[i] ;
   //     printf("%d",c[i]) ;
    }

    for ( i = 0 ; i < n ; i++){
       if ( a[i] != 0 ){
           do {
    //        printf("1\n") ;
            if (c[i] % 2 == 0)
                c[i] = c[i] /2 ;
            if (c[i] % 2 == 1)
                c[i] = (3*c[i]+1)/2 ;
            for ( j = 0 ; j < n ; j++)
                 if ( a[j] == c[i] )
                    a[j] = 0 ;
          }while(c[i] != 1) ;
       }
    }
    
    t = 0 ;
    for ( i = 0 ; i < n ; i ++){
    
        if ( a[i] != 0 )
            res[t++] = a[i]  ;
    }

    for ( i = 0 ; i < t -1 ; i++)
        printf("%d ",res[i]) ;
    printf("%d",res[t-1]) ;
    
    return 0 ; 
}


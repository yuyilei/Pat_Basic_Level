#include<stdio.h>

int tell( int n ) {

    int a[4] = {0} ;
    int  i ;

    for ( i  = 0 ; i < 4 && n > 0 ; i++){
      
       a[i] = n % 10 ;
       n /= 10 ;  
    }

    if ( (a[0] == a[1]) && ( a[1] == a[2]) && ( a[2] == a[3]) )
        return 0 ;
    else 
        return 1 ;
}

int to( int n ) {
   int i ; 
   int j ;
   int a[4] = {0} ;
   int temp ;
  for ( i = 0  ;  i < 4 ; i++){
  
      a[i] = n % 10 ;
      n /= 10 ;
  }

  for ( i = 0 ; i < 4 ; i++){
  
      for ( j = 0 ;  j+ i < 4 ; j++){
      
          if ( a[j] > a[j+1]){
          
              temp = a[j] ; 
              a[j] = a[j+1] ;
              a[j+1] = temp ;
          }
      }
  }
    return a ;
}
    
int asc( int a[ ] ) {
   
   int res = 0 ;
   int i ; 
 //   int j ;

  /* for ( i = 0 ; i < 4 ; i++){
   
       a[i] = n % 10 ;
       n /= 10 ;
   }

   for ( i = 0 ; i < 4 ; i ++){
   
       for ( j = 0 ; i + j < 4 ; j++){
       
           if ( a[j] > a[j+1] ){
           
              a[j] = a[j] + a[j + 1] ;
              a[j+1] = a[j] - a[j+1] ;
              a[j] = a[j] - a[j+1] ;
           }
       }
   }
   */
    j = 1000 ;
   for ( i = 0 ; i < 4 ; i ++ ){
       res += j*a[i] ;
       j = j / 10 ;
   }
   return res ;
}


int desc( int a[ ] ) {
   
   int res = 0 ;
 //  int a[4] = {0} ;
   int i ; 
 //  int j ;

 /*  for ( i = 0 ; i < 4 ; i++){
      
          a[i] = n % 10 ;
          n /= 10 ;
      }

   for ( i = 0 ; i < 4 ; i ++){
      
        for ( j = 0 ; i + j < 4 ; j++){
                 
             if ( a[j] > a[j+1] ) {
                  a[j] = a[j] + a[j + 1] ;
                  a[j+1] = a[j] - a[j+1] ;
                  a[j] = a[j] - a[j+1] ;
                 }
           }
      }
   */
    j = 1 ;
   for ( i = 0 ; i < 4 ; i ++  ){
       res += j*a[i] ;
       j = j * 10;
   }
   return res ;
}


int main(){

    
    int  i ;
    int  n[1000] = {0} ;

    scanf("%d",&n[0]) ;

    if ( tell(n[0]) == 0 )
        printf("%04d - %04d = 0000",n[0],n[0]) ;
    else{
        i = 0 ;
        do {
           printf("%04d - %04d = %04d\n",desc(to(n[i])) ,asc(to(n[i])) ,desc(to(n[i])) - asc(to(n[i]))) ;
           n[i+1] = desc(to(n[i]))- asc(to(n[i])) ;
           i++ ;
        } while (n[i] != 6174) ;

    }

    return 0 ;
}

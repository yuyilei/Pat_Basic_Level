#include<stdio.h>
#include<stdlib.h>
int comp(const void*a,const void*b){
    return *(int*)a-*(int*)b;
}

int main(){

    long  n  ;
    long  a[100000] = {0} ;
    long  b[100000] = {0} ;
    long  c[10001] = {0} ;
    long  i ;
    long  m ;
    long  x;
    long  y ;
    long  mark[100000] = {0} ;
    long  t = 0 ;
    long  s[100000] ={0} ;

    scanf("%ld",&n) ;

/*    for ( i = 0 ; i < 99999 ; i++){
    
        a[i] = -2 ;
        b[i] = -2 ;
    }
  */ 
    for (i=0;i<=100000;i++){ 
       a[i] = -2 ;
       b[i] = -2 ;
    }

    for ( i = 0 ; i < n ; i++){
    
        scanf("%ld %ld",&x,&y) ;
        a[x] = y ;
        b[y] = x ;
 //       printf("%ld %ld\n",x,y) ; 
    }
//    printf("%ld %ld\n",a[n-1],b[n-1]) ;


    scanf("%ld",&m) ;
//    printf("%ld",m) ;
    for ( i = 0 ; i < m; i++){
    
        scanf("%ld",&c[i]) ;
//        printf("%ld",c[i]) ;
        if ( a[c[i]] != -2 )
            s[c[i]] = -1 ;

        if ( b[c[i]] != -2 )
            s[c[i]] = -1 ;

        if ( b[c[i]] == -2 && a[c[i]] == -2 )
            mark[t++] = c[i] ;
    }
         
         
    for ( i = 0 ; i < m ; i++){
    
        if ( s[a[c[i]]] != s[c[i]] && a[c[i]] != -2 )
            mark[t++] = c[i] ;

        if ( s[b[c[i]]] != s[c[i]] && b[c[i]] != -2 )
            mark[t++] = c[i] ;
    }
   
 //   for ( i = 0 ; i < t -1 ;i ++)
   //     printf("%ld",mark[i]) ;

    qsort(mark, t ,sizeof(long) , comp) ;

    if ( t == 0 )
        printf("0\n") ;
    else {
    printf("%ld\n",t) ;
    for ( i = 0 ; i < t - 1; i++)
        printf("%05ld ",mark[i]) ;

    printf("%05ld",mark[t - 1]) ;
 
    }
    return 0 ;

}

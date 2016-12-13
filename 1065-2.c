#include<stdio.h>
#include<stdlib.h>
int comp(const void*a,const void*b){
    return *(int*)a-*(int*)b;
}

int main(){

    long  n  ;
    long  a[99999] = {0} ;
    long  b[99999] = {0} ;
    long  c[10000] = {0} ;
    long  i ;
    long  m ;
    long  x;
    long  y ;
    long  mark[99999] = {0} ;
    long  t = 0 ;
    long  s[99999] ={0} ;

    scanf("%ld",&n) ;
    
    for ( i = 0 ; i < n ; i++){
    
        scanf("%ld %ld",&x,&y) ;
        a[x] = y ;
        b[y] = x ;
    }

    scanf("%ld",&m) ;
//    printf("%ld",m) ;
    for ( i = 0 ; i < m ; i++){
    
        scanf("%ld",&c[i]) ;
        if ( a[c[i]] != 0 )
            s[c[i]] = -1 ;

        if ( b[c[i]] != 0 )
            s[c[i]] = -1 ;

        if ( b[c[i]] == 0 && a[c[i]] == 0 )
            mark[t++] = c[i] ;
    }
         
         
    for ( i = 0 ; i < n ; i++){
    
        if ( s[a[c[i]]] != s[c[i]] && a[c[i]] != 0 )
            mark[t++] = c[i] ;

        if ( s[b[c[i]]] != s[c[i]] && b[c[i]] != 0 )
            mark[t++] = c[i] ;
    }
   
 //   for ( i = 0 ; i < t -1 ;i ++)
   //     printf("%ld",mark[i]) ;

    qsort(mark, t ,sizeof(long) , comp) ;

    printf("%ld\n",t) ;
    for ( i = 0 ; i < t - 1 ; i++)
        printf("%ld ",mark[i]) ;

    printf("%ld",mark[t-1]) ;

    return 0 ;


}

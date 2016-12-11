#include<stdio.h>
#include<stdlib.h>
int compInc(const void *a, const void *b){  
    return *(int *)a - *(int *)b;  
}  

int main(){

    char name[10000][8] ;
    int  a[10000] = {0} ;
    int  n ; 
    int  k ; 
    int  i ;
    int  line ;
    int  last ;
    int  copy[10000] = {0} ;

    scanf("%d %d",&n,&k) ;
    
    line = n / k ;
    last = n - ( line - 1 )* k ;

    for (  i = 0 ; i < n ; i++){
    
        scanf("%s",name[i]) ;
        scanf("%d",&a[i]) ;
        copy[i] = a[i] ;
    }

    qsort(a,n, sizeof(a[0]), compInc); 

    if ( last != line ) {
    
        for ( i = n -1  ; i >= n -1 -last ; i--)

    }

}

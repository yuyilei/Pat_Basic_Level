#include<stdio.h>
#include<stdlib.h>
int compInc(const void *a, const void *b)  
{  
    return *(long *)a - *(long *)b;  
}  

int to_find_index(long length ,  long i , long number , long s[]){

    long j ;
    long res = 0 ;
    for ( j = i + 1 ; j < length ; j++) {
    
        if ( number == s[j]) {
        
           res = j ;
           break ;
        }
    }

    return res ;
}

int main(){

    long n ; 
    long a[100000] ;
    long b[100000] ;
    long i ; 
    long res = 0 ;

    scanf("%ld",&n) ; 
    for( i = 0 ; i < n ; i++){
    
        scanf("%ld",&a[i]) ;
        b[i] = a[i] ;
        printf("%ld",a[i]) ;
    }
    
    qsort(a,n,sizeof(a[0]),compInc) ;
    
    i = 0 ;
   // printf("1")  ;
    do {
    
        if ( a[i] != b[i] ){
        
           if ( to_find_index(n,i,a[i],b ) != 0 ){
           
               i = to_find_index(n,i,a[i],b) + 1 ;
           }
        }

        else { 
            res  += 1 ;
        }
    }while(i<n) ;

    printf("%ld",res) ;
    return 0 ; 


}

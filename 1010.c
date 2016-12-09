#include<stdio.h>
int main(){

    int n[1000] ;
    int len ;
    int i ;
    char ch ;   

    for ( i = 0 ; ;i++) {
        scanf("%d",&n[i]) ;
        if ( getchar() == '\n')
            break ;
    }
     //   printf("%d",n[i]) ;
    len = i ;
   //  printf("%d",len) ;
    for ( i = 0 ;  i <= len -3 ; i = i + 2){
        if ( n[i+1] !=0 && i < len - 3 )
        printf("%d %d ",n[i]*n[i+1],n[i+1]-1) ;
        
        else if ( n[i+1] != 0 && i == len -3 && n[len] == 0)
         printf("%d %d",n[i]*n[i+1],n[i+1]-1) ;

        else if ( n[i+1] != 0 && i == len-3 && n[len] != 0)
         printf("%d %d ",n[i]*n[i+1],n[i+1]-1) ;   
    }
    if ( n[len] != 0 )
    printf("%d %d",n[len -1]*n[len],n[len] - 1) ;

    return 0 ;
    
}

/*3n+1猜想*/
#include<stdio.h>

int main(){
    
    int i=0 , n ;

    scanf("%d",&n);

    while (  n != 1){
    
        if ( n % 2 == 0 )
            n = n/2 ;
        else
            n = ( 3*n +1)/2;
        i++;
    }

    printf("%d", i );
    return 0 ;
}

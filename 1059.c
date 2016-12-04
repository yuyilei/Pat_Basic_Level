#include<stdio.h>

int tell(int a){

    int i ;
    int count = 0 ;

    for ( i = 3 ; i <= a && count <=1 ; i ++ )
        if ( a % i == 0)
            count++ ;

    if ( count == 1)
        return 0 ;
    else 
        return 1 ;
}
int main(){

    int n ;
    int k ;
    int a[10000] ;
    int b[10000] ;
    int i ;
    int j ;
    int count[10000] = {0} ;
    int check[10000] = {0} ;

    scanf("%d",&n) ;

    for ( i = 0 ; i < n ; i ++){
    
        scanf("\n%d",&a[i]) ;
    }


    scanf("%d",&k) ;
    for ( i = 0 ; i < k ; i++){
    
        scanf("\n%d",&b[i]) ;
    }        

    for ( i = 0 ; i < k ; i++){
    
        for ( j = 0 ; j < n ; j++){
            if ( a[j] == b[i]){
                count[i]++ ;
                check[j]++ ;
                if ( j == 0 && check[j] == 1)
                    printf("%04d: Mystery Award\n",a[j]) ;
                else if ( j >= 1 && j <= 2 && check[j] == 1)
                    printf("%04d: Minion\n",a[j]);
                else if( tell(j+1) == 0 && check[j] == 1)
                    printf("%04d: Minion\n",a[j]) ;
                else if ( tell(j+1) == 1 && check[j] == 1)
                    printf("%04d: Chocolate\n",a[j]);

                if ( check[j] > 1)
                    printf("%04d: Checked\n",a[j]);
            }
        }
        if ( count[i] == 0 )
            printf("%04d: Are you kidding?\n" , b[i]) ;
    }

    return 0 ; 
}

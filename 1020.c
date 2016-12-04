#include<stdio.h>


int main(){

    int number ;
    int need ;
    float a[1000] = {0} ;
    float b[1000] = {0} ;
    float price[1000] = {0} ;
    int i ;
    int j ;
    float temp ;
    float sum = 0 ;

    scanf("%d %d",&number,&need) ;
    
    for ( i = 0 ; i < number ; i++)
        scanf("%f",&a[i]) ;

    for ( i = 0 ; i < number ; i++){
        scanf("%f",&b[i]) ;
        price[i] = 1.000*b[i]/a[i] ;
    }

    for ( i = 0 ; i < number ; i++){
    
        for ( j = 0 ; j + i < number ; j++){
        
            if ( price[j+1] > price[j]){
            
                temp = price[j+1] ;
                price[j+1] = price[j] ;
                price[j] = temp ;
                temp = a[j+1] ;
                a[i+1] = a[j] ;
                a[j] =temp ;
                temp = b[j+1] ;
                b[j+1] = b[j] ;
                b[j] =temp ;
            }
        }
    }

    for ( i = 0 ; need > 0 && i < number ; i ++){ 
    
        if ( need >= a[i]){
        
            sum += b[i] ;
            need -= a[i] ;
        }

        else {
            
            sum += need * price[i] ;
            need = 0 ;
        }
    }

    printf("%.2f",sum) ;
    return 0 ;
}

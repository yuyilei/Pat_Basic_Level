/*找零钱*/

#include<stdio.h>
int main (){

    long g1 ;
    long g2 ;
    int  s1 ;
    int  s2 ;
    int  k1 ;
    int  k2 ;
    long g3 ;
    int  s3 ;
    int  k3 ;
    scanf("%ld.%d.%d %ld.%d.%d",&g1,&s1,&k1,&g2,&s2,&k2) ;

    if ( g1  > g2) {
        printf("-");
        g1 = g1 + g2 ;
        g2 = g1 - g2 ;
        g1 = g1 - g2 ;
        s1 = s1 + s2 ;
        s2 = s1 - s2 ;
        s1 = s1 - s2 ;
        k1 = k1 + k2 ;
        k2 = k1 - k2 ;
        k1 = k1 - k2 ;
    }
    else if ( g1 == g2 , s1 > s2 ){
        printf("-");
        s1 = s1 + s2 ;
        s2 = s1 - s2 ;
        s1 = s1 - s2 ;
        k1 = k1 + k2 ;
        k2 = k1 - k2 ;
        k1 = k1 - k2 ;
    }
    else if (g1 == g2 , s1 ==s2 , k1 > k2){
        printf("-");
        k1 = k1 + k2 ;
        k2 = k1 - k2 ;
        k1 = k1 - k2 ;
    }

    if ( k2 >= k1 ) 
        k3 = k2 - k1 ; 
    else {
    
        k3 = k2 + 29 - k1 ;
        s2-- ;
    }

    if ( s2 >= s1 )
        s3 = s2 - s1 ;
    else {
    
        s3 = s2 + 17 - s1 ;
        g2--;
    }  
    
    if ( g2 >= g1)
    g3 = g2 - g1 ;
    else 
    g3 = g1 - g2 ;
    printf("%ld.%d.%d",g3,s3,k3);
    return 0 ;

}

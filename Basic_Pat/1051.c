#include<stdio.h>
#include<math.h>
int main(){

    double r1 ,r2 ,p1 ,p2  ;
    double a1 ,a2 ,a3 ,b1 ,b2 ,b3 ;
    
    scanf("%lf %lf %lf %lf",&r1,&p1,&r2,&p2) ;

    a1 = r1 * cos(p1) ;
    b1 = r1 * sin(p1) ;
    a2 = r2 * cos(p2) ;
    b2 = r2 * sin(p2) ;

    a3 = a1*a2 - b1*b2 ;
    b3 = b1*a2 + b2*a1 ;
    

    if (a3 + 0.005 >= 0 && a3 <0)
        printf("0.00") ;
    else 
        printf("%.2lf",a3) ;

    if ( b3 >=0 )
        printf("+%.2lfi",b3) ;
    else if 
        ( b3 + 0.005 >= 0 && b3 <0)
        printf("+0.00i")  ;   
    else 
        printf("%.2lfi",b3) ;

    return  0 ;

}

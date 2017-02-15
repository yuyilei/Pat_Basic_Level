#include<stdio.h>

Struct student{

    char name ; 
    int  height ;
}

int main(){

    int all ; 
    int each ; 
    int line ; 
    int last ;
    

    scanf("%d %d",&all,&line) ;
    each = all / line  ;
    last = all - (line - 1)*each ;

    Struct student a[all] ;

    int i ; 
    for (i = 0 ; i < all ; i++){
    
        scanf("%s %d",&a[i].name,&a[i].height) ;

    } 



}

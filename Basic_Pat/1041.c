/*考试座位号*/

#include<stdio.h>

struct Student {

    long long number;   /*把number设为char也是可以的,后面要改成%c,去掉&*/
    int seat1 ;
    int seat2 ;
};

int main(){

    int  i ; 
    int  j ; 
    int  n ; 
    int  m ;
    int  a[1000] ;
    struct Student p[1000] ; 

    scanf("%d",&n);
    
    for ( i = 0 ; i < n ; i ++){
       struct Student student ;
       scanf("%lld",&student.number);
       scanf("%d",&student.seat1);
       scanf("%d",&student.seat2);
       p[i] = student ;
   }

    scanf("%d",&m);

    for( i = 0 ; i< m ; i++)
        scanf("%d",&a[i]);
    
/*多重循环要注意，不要写错 i和 j*/
    for( i = 0 ;i < m ; i++){
    
        for ( j = 0 ; j < n ; j++){
        
            if (a[i] == p[j].seat1){
            
                printf("%lld %d\n",p[j].number,p[j].seat2);
            }
               
        }
    }
   
   return 0 ;
}

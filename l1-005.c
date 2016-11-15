/*考试座位号*/
/*如何保证他们的信息是不一样的?*/

#include<stdio.h>
   struct  student {                                                           
            char number[14];                                                         
            int  seat1 ;                                                             
            int  seat2 ;                                                             
      };    

int main(){
 
    int i ; /*用于循环*/
    int j ; /*用于循环*/
    int  n ; /*总人数*/
    int m ;  /*要获取信息的人数*/
    int  k = 0 ; /*用于例遍数组*/
    int a[100] ;  /*用于存储考生的座位号*/

    scanf("%d",&n);   /*考生人数*/
    
    for (i =0 ; i < n ; i++){
    
        struct student i ;
    }   /*建立结构体*/

    for ( i=0 ; i< n; i++){
         for ( j=0; j <14 ;j++ ){
            scanf("%s",&i.number[j]);
         }

         scanf("%d",&i.seat1);
         scanf("%d",&i.seat2);
        
    }    /*得到学号等信息*/

    scanf("%d",&m); /*要获取m个人的信息*/
    
    for( i = 0 ; i < m ; i++){
     
        scanf("%d", a[i]) ;
    }     /*获取座位号*/


    for (i =0 ; i<n ; i++ ) {
      
        for (  k= 0 ; k < m ; k++){
        
            if ( a[i] == k.seat2){
            
                printf("%s",k.number);
                printf("%d",k.seat1);

            }
        }
    }

   return  0; 

}

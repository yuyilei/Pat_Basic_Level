/*考试座位号*/
/*如何保证他们的信息是不一样的?不用保证，自动输入*/

#include<stdio.h>
   struct  Student {                                                                                                  
            long number; /*学号*/
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
    struct Student students[1000];

    scanf("%d",&n);   /*考生人数*/
    
    for (i = 0 ; i < n ; i++){
        struct Student student;
        scanf("%ld", &student.number);
        scanf("%d", &student.seat1);
        scanf("%d", &student.seat2);
        students[i] = student;
    }

    scanf("%d",&m); /*要获取m个人的信息*/
    
    for( i = 0 ; i < m ; i++){
        scanf("%d", &a[i]);
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(students[j].seat1 == a[i]) {
                printf("%ld %d\n", students[j].number, students[j].seat2);
            }
        }
    }

    return  0; 
}

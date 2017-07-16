#include<stdio.h>
#include<stdlib.h>

typedef struct student {

    int de ; 
    int cai ;
    long id  ;
    struct student *next ;

} student_t ;

void  insert(student_t *head,student_t student){
    for (student_t *i = head ; i != NULL ; i = i->next)[
    
        i->next = &student ; 
        student->next = NULL ;

    ]

}

int main() {

    int tmp ;
    int n , h ,l  ;

    scanf("%d %d %d",&n,&l,&h) ;
    int i ; 
    int  x ,  y ;
    long z ;
    int s[10001] ; 
    int count ; 

    for (i = 0 ; i < n ; i++){
    
        scanf("%ld %d %d"&z,&x,&y) ;
        if (x>=l && y >=l ){
            student_t s[i] = {.id = z ; .de = x , .cai = y } ; 
            insert(head , s[i]) ;
        }
    }

    count = i ;
    
    *head = &s[0] ; 


}

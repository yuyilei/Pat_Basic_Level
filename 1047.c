/*编程团体赛*/

#include<stdio.h>

int main(){

    int  n ;
    int  team[1000]   ;
    int  member[1000]   ; 
    int  score[1000]   ;
    int  add[1000]  ;
    int  i ; 
    int  j ;
    int  k ;
    int number ;
    int max ;

    scanf("%d",&n);

    for ( i = 0 ; i < n ; i++)
        scanf("%d-%d %d",&team[i] ,&member[i] ,&score[i]) ;
    
    for ( i = 0; i < n ; i++){
     add[i] = score[i] ;
        if ( score[i] != 0 )
            for ( j = 0 ; j < n ; j ++){
            
                if ( team[i] == team[j] && i != j ){   /*i和j不相等，防止同一个分数重复相加*/
                                                       /*if 的条件中，逗号和&&有什么区别，我的天，好想去死*/
                    add[i] += score[j];
                    score[j] = 0 ;
            }
        }
    }      
       
        number = team[0] ;
        max = add[0] ;
        for ( i = 0 ;  i < n ; i++){
           if ( add[i] > max){
               max = add[i];
               number = team[i] ;
           }       
        }

        printf("%d %d",number, max);
      return 0 ;    
}

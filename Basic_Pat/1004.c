#include<stdio.h>
struct Student {

    char name[10] ;
    char number[10] ;
    int score ;
} ;

int main(){

    struct Student p[101] ;
    int n ;
    int i ;
    int j ;
  
    scanf("%d",&n) ;

    for ( i = 0 ; i < n ; i++){
    
        struct Student p[i] ;
        scanf("%s",&p[i].name) ;
        scanf("%s",&p[i].number) ;
        scanf("%d",&p[i].score) ;
    }

   

    for ( i = 0 ; i < n ; i ++){
    
        for ( j = 0 ; j + i < n -1 ;j ++){
        
            if ( p[j].score > p[j+1].score){
            
                p[100] = p[j] ;
                p[j] = p[j+1] ;
                p[j+1] = p[100] ;
            }
        }
    }

    printf("%s %s\n",p[n-1].name,p[n-1].number) ;
    printf("%s %s\n",p[0].name,p[0].number) ;

    return 0 ;
    
}

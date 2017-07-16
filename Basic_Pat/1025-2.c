#include<stdio.h>


struct node {

    int add ;
    int data ;
    int next ;
} ;

int main() {
    
    int first ;
    int number ;
    int k ;
    scanf("%d%d%d",&first,&number,&k ) ;

    struct node p[100000] ;
    struct node q[number] ;

    int i ;
    for ( i = 0 ; i < number ; i++) {
    
        int add1 ;
        scanf("%d",&add1) ;
        p[add1].add = add1;
        scanf("%d",&p[add1].data) ;
        scanf("%d",&p[add1].next) ;
    }
    
    if ( first == -1){
    
        printf("-1\n") ;
        return 0 ;
    }

    struct node temp ;

    q[0] = p[first] ;


//    printf("\n") ;

    int count = 0 ;
    for ( i = 0 ;  ; i++ ){

        int add1 ;
        if (q[i].next == -1 )
            break ;
        add1 = q[i].next ;
        q[i+1] = p[add1] ; 
        count++ ;
      
    }

    count ++ ;

  /*  for ( i = 0 ; i < number ; i++)
        printf("%d %d %d\n",q[i].add,q[i].data,q[i].next) ;

    printf("\n") ;
*/
    int all = number  ;
    int index = 0 ;
    int m = k / 2 ;
    int t = count / k ;
    int j = 0 ;

    while (1){
    
        if(j < t ){
        
            for (int n = j*k ; n < j*k+m ; n++ ){
            
                temp = q[n] ;
                q[n] = q[2*j*k+k-n-1] ;
                q[2*j*k+k-n-1] = temp ; 
//                printf("%d %d\n",n,2*j*k+k-n-1) ;
            }
            j++ ;
  //          printf("j %d \n",j) ; 
        }

        else 
            break ;
    }
    
    for ( j = count-1 ; j > 0; j--){
    
        q[j-1].next = q[j].add ;

    }

    
//        printf("%d\n",count)  ;
        for ( i = 0 ; i < count -1 ; i++){
    
            printf("%05d %d %05d\n",q[i].add,q[i].data,q[i].next) ;
        }

        printf("%05d %d -1\n",q[i].add,q[i].data) ;
    
    return 0 ;
}

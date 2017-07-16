#include<iostream>
#include<cstdio>
#include<map>
#include<vector> 

using namespace std ;

map <long long , int> maps ;
vector <vector<int> > a ; // 还是用动态数组吧,不然就段错误了啊啊啊啊,智障啊啊啊啊.
    
int dir[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}};
bool judge(int i, int j , long long tol , int n ,int m  ) {
      int k ;
      for ( k = 0; k < 8; k++) {
          int tx = i + dir[k][0];
          int ty = j + dir[k][1];
          if (tx >= 0 && tx < n && ty >= 0 && ty < m && a[i][j] - a[tx][ty] >= 0 - tol && a[i][j] - a[tx][ty] <= tol) 
              return false;
          }
      return true;
  } 


int main () {

    int n ; 
    int m ;
    long long  tol ;
    scanf("%d%d%lld",&m,&n,&tol) ;
    a.resize(n, vector<int>(m)) ;

    int i ;
    int j ; 

    for ( i = 0 ; i < n ; i++) {
    
        for ( j = 0 ; j < m ; j++) {
        
            scanf("%d",&a[i][j]) ;
            maps[a[i][j]]++ ;
        }
    }

    int x = 0 ;
    int y = 0 ;
    long long res = 0 ;
    int flag1 = 0 ;

    for ( i = 0 ; i < n  ; i++ ){
    
        for ( j = 0 ; j < m  ; j++ ) {
        
            bool temp = judge(i,j,tol,n,m) ;

//            printf("%d %d %lld\n",j+1,i+1,a[i][j]) ;


/*            if ( flag1 == 1 && temp == 1) {
           
               printf("Not Unique\n") ;
               return 0 ;
            }
 */           
            if ( maps[a[i][j]] == 1 && temp == true  ){
            
                flag1 += 1 ;
                x = j + 1 ;
                y = i + 1 ;
                res = a[i][j] ;
           } 
            
//             if ( temp == 0 ) 
          //      printf("%d,%d,%d\n" ,j+1,i+1, a[i][j]) ;
         }
    }

    if ( flag1 == 0) 
        printf("Not Exist\n") ;
    else if (flag1 == 1 )
        printf("(%d, %d): %lld",x,y,res) ;
    else if (flag1 > 1  )  
        printf("Not Unique") ;

//    printf("%d",tell(a,tol,2,4)) ;


   // printf("%d",sub(a[0][0],a[1][1],tol)) ; 
    return 0 ;

}

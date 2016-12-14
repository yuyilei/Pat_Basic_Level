#include<stdio.h>
int main(){

    long n ; 
    long i ;
    char name[100000][5] ;
    long old = -1 ;
    long young = -1;
    int  y ;
    int  m ;
    int  d ;
    long number = 0 ;
    int  maxy = 1814 ;
    int  maxm = 1 ;
    int  maxd = 1 ;
    int  miny = 2014 ;
    int  minm = 12 ;
    int  mind = 31 ;

    scanf("%ld",&n) ;

    for ( i = 0 ; i< n ; i ++){
    
        scanf("\n%s %d/%d/%d",name[i],&y,&m,&d) ;
 //       printf("%s %d %d %d\n",name[i],y,m,d) ;

        if ( y >= 1815 && y <= 2013 )
            number++ ;
        else if ( y == 1814 ){
        
            if ( m > 10)
                number ++ ;
            if ( m == 9 && d >= 6)
                number ++ ;
            else
                y = 0 ;
        }
        else if ( y == 2014 ){
        
            if ( m < 9)
                number++ ;
            if ( m== 9 && d <= 6)
                number++ ;
            else 
                y = 0 ; 
        }
        else
            y = 0 ;

        if ( y != 0 && y <= miny ){
            if ( y < miny ){
                miny = y ;
                mind = d ;
                minm = m ;
                old = i ;
            }
            if  ( y == miny ){
               if ( m < minm ){
               
                   minm = m ;
                   mind = d ;
                   old = i ;
               } 
                if ( m == minm){
                
                    if ( d < mind ){
                        mind = d ;
                        old = i ;
                   }
                } 
             }
          }
            
        if ( y != 0 && y >= maxy ){
        
            if ( y > maxy ){
            
                maxy = y ;
                maxm = m ;
                maxd = d ;
                young = i ;
            }

            if ( y == maxy){
            
                if ( m > maxm ){
                
                    maxm = m ;
                    maxd = d ;
                    young = i ;
                }
                if ( m == maxm ){
                
                    if ( d > maxd ){
                    
                        maxd = d ;
                        young = i ;
                    }
                }
            }
        }

        
        
    }
    if ( old != -1 && young != -1 )
    printf("%ld %s %s",number,name[old],name[young]) ;
    
    return 0; 

}

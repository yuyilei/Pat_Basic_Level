/*各位数统计*/                                                                  
                                                                                  
   #include<stdio.h>                                                               
    #include<math.h>                                                                
     int main(){                                                                     
         int  i =0 ;                                                                 
         int a[10] = {0} ; 
          char n[1000] = {0} ;    
       // int *a = b ;                                                               
         printf("请输入一个整数\n") ;                                                 
        scanf("%s",&n);                                                              
                                                                                     
        while ( n[i]){                                                               
         switch ( n[i]){                                                         
               case  0 : a[0]++ ;break ;                                             
               case  1 : a[1]++ ;break ;                                             
               case  2 : a[2]++ ;break ;                                             
               case  3 : a[3]++ ;break ;                                             
               case  4 : a[4]++ ;break ;                                             
               case  5 : a[5]++ ;break ;                                             
               case  6 : a[6]++ ;break ;                                             
               case  7 : a[7]++ ;break ;                                             
               case  8 : a[8]++ ;break ;                                             
               case  9 : a[9]++ ;break ;                                             
                                                                                     
                                                                                     
          }                                                                         
           i++ ;                                                               
        }                                                                            
                                                                                     
        for ( i =0 ;i < 9 ; i++)                                                    
           printf("在这个整数中%d出现了%d次\n",i,a[i]) ;                             
                                                                                    
        return 0 ;                                                                   
     }                                                                               
                                           

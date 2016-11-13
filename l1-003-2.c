 #include<stdio.h>

int main(){
   int ch ;
   int a[10] = {0} ;
   int i ;

   printf("输入一个整数\n");

   while (( ch  =getchar()) != EOF)
   {
       
             switch ( ch ){
                       case  '0' : a[0]++ ;break ;
                       case  '1' : a[1]++ ;break ;
                       case  '2' : a[2]++ ;break ;
                       case  '3' : a[3]++ ;break ;
                       case  '4' : a[4]++ ;break ;
                       case  '5' : a[5]++ ;break ;
                       case  '6' : a[6]++ ;break ;
                       case  '7' : a[7]++ ;break ;
                       case  '8' : a[8]++ ;break ;
                       case  '9' : a[9]++ ;break ;
             
      }                               
                   
   }
               for ( i =0 ;i < 9 ; i++)
                     printf("在这个整数中%d出现了%d次\n",i,a[i]);

               return 0 ;
}


/*输入 一个正整数 ，求他的连续因子，并，输出它的最大的连续因子个数*/

#include<stdio.h>

int main(){
   long n = 0;
   long i = 0;
   long j = 0;
   long k = 0;
   long l = 0;
   long t  = 3;
   long start = 0 ;
   long count = 0;
   long a[100] = {0} ; /*数组的元素不能太大，否则会很坑&*/ 
   int  m[100] = {0} ;
   printf("输入一个整数\n");
   scanf("%ld", &n);

   if ( n % 2 != 0)
      printf("该整数没有大于2个的连续因子"); /*奇数的因子永远不可能连续*/
   else {
       while( n >=t) {
         if ( n % t  == 0 )
             a [i++] = t ;
         t = t +1 ;
       }
       
   }

    for(i = 0; a[i]; i++) 
        k++ ; /*k是因子的个数*/
   
    for (j = 0; a[j]>0; j++){
        for ( l = k -1 ; l > j ; l--){
             if ( a[l] - a[j] == (l -j ))
                {
                    if (l - j > count )
                    {
                        count = l - j ;
                        start = j ;
                     } 
             
                 }
         }
    }

    printf("%ld\n",count+1);

    for ( i = start ; i <= count + start ;i ++)
          printf("%ld " , a[i] );
    printf("\n");
         
   return 0 ;   
}


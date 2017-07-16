/*完美数列*/

#include<stdio.h>
#include <math.h>

void Merge(long array[], long left, long m, long right)  
{  
    long aux[100000] = {0};  // 临时数组 （若不使用临时数组，将两个有序数组合并为一个有序数组比较麻烦）  
    long i; //第一个数组索引  
    long j; //第二个数组索引  
    long k; //临时数组索引  
      
    for (i = left, j = m+1, k = 0; k <= right-left; k++) {
        if (i == m+1)  {  
            aux[k] = array[j++];  
            continue;  
        }  
        if (j == right+1)  {  
            aux[k] = array[i++];  
            continue;  
        }  
        if (array[i] < array[j])  {  
            aux[k] = array[i++];  
        }  
        else  
        {  
            aux[k] = array[j++];  
        }  
    }  
      
    for (i = left, j = 0; i <= right; i++, j++) {  
        array[i] = aux[j];  
    }  
}  

void MergeSort(long array[], long start, long end) {  
    if (start < end) {  
        long i;  
        i = (end + start) / 2;  
        MergeSort(array, start, i);  
        MergeSort(array, i + 1, end);  
        Merge(array, start, i, end);  
    }  
} 
 


int main(){

    long n ; 
    long p ;
    long a[100000] ;
    long i ; 
    long j ;
    long min ;
    long max ;
    long number[100000] ;
    long no ;
    long temp;
    long len;
    long maxlen=0;
    //long value;
   

    scanf ( "%ld %ld" ,&n,&p);
   
    for ( i = 0 ; i <  n ; i++) 
         // scanf ("%ld",&a[i]) ;
         a[i] = i+1;

    
    //for(i=0; i<n; i++) {
    //    for(j=i+1; j<n; j++) {
    //        if(a[i]>a[j]) {
    //            temp = a[i];
    //            a[i] = a[j];
    //            a[j] = temp;
    //        }
    //    }
    //}

//    value = ceil(a[n-1]/p);
    MergeSort(a, 0, 100000);

    for ( i = 0 ; i<n; i++){
        min = a[i] ;
        max = p * min ;
        for(j = n-1; j>i && a[j]>max; j--) { 
            if(a[j] <= max) {
                len = j-i+1;
                if(len > maxlen) { maxlen = len; }
                break;
            }
        }
    }
            
    printf("%ld", maxlen);
    
  return 0 ;     
}

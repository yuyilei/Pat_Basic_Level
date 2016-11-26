/*完美数列*/

#include<stdio.h>
#include <math.h>

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
         scanf ("%ld",&a[i]) ;
         //a[i] = i+1;

    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
            if(a[i]>a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

//    value = ceil(a[n-1]/p);

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

#include<stdio.h>
#include<stdlib.h>

int equal(int *a , int *b , int size) {
    int i ; 
    int flag = 0 ; 

    for ( i = 0; i < size ; i++) {
        
            if (a[i] != b[i]){
                    
                        flag = 1 ; 
                        break ;  
                    }
        }

    return flag ;

}


void sort (int *arr , int n) {

    int i , j ; 
    int temp ;

    for  ( i = 0 ; i < n ; i++){
    
        for (  j = 0 ; j+i < n -1  ;j++) {
            if ( arr[j] > arr[j+1]){
            
                temp = arr[j] ;
                arr[j] = arr[j+1] ; 
                arr[j+1] = temp ;
           }    
        }
    }
}

int tell_insertion( int *arr , int *relative, int size ){

    int n =1 ;
    int i ;
    int flag = 0 ; 
    int temp[size] ;

    for ( n = size ; n >=0  ;n--){  // 从后往前查找!!
    
        for ( i =0 ; i < size ; i++) // 每次要复制一下数组 , sort 函数会对原有的数组产生影响
            temp[i] = arr[i] ;

        sort(temp,n) ;
        if (equal(temp,relative,size) == 0 ){
        
            flag = n +1;
            break ;
        }
    }

    return flag ;     
}

void merge(int *arr , int left , int middle , int right , int size) {

    int i = left , j = middle+1 , k ;
    int temp_arr[size] ; 
    for ( k = left ; k <= right ; k++) 
        temp_arr[k] = arr[k] ;

    for ( k = left ; k <= right ; k++) {
    
        if (i > middle )
            arr[k] = temp_arr[j++] ;
        else if ( j > right )
            arr[k] = temp_arr[i++] ;
        else if ( temp_arr[i] < temp_arr[j])
            arr[k] = temp_arr[i++] ;
        else 
            arr[k] = temp_arr[j++] ;
    }
}



void merge_sort(int *arr , int size , int *relative ) {

    int n  ;
    int i  ;
    int right ;
    int flag = 0 ;

    for ( n = 1 ; n < size ; n *= 2) {
    
        for ( i = 0 ; i < size - n ; i = i+2*n) {
            if ( ( i+2*n-1) > (size -1)) 
                right = size -1 ;
            else 
                right = i + 2*n -1 ;
            merge(arr, i , i+n-1 , right ,size) ;

          }
            if ( flag == 1 ) 
                break ;
            else if ( equal(arr,relative,size) == 0 )
                flag = 1 ;
                
      }
}

int main() {

    int arr[101] ;
    int i ; 
    int size ; 
    int relative[101] ;
    int n ;
    int arr_[101] ;
    int relative_[101] ;

    scanf("%d",&size) ;

    for ( i = 0 ; i< size ;i++){
        scanf("%d",&arr[i]) ;
        arr_[i] = arr[i] ; // tell_insertion 函数会对原数组产生影响 , 所以要先复制一下
    }

    for ( i =0 ; i < size ; i++){
        scanf("%d",&relative[i]) ;
        relative_[i] = relative[i] ; // tell_insertion 函数会对原数组产生影响 , 所以复制一下 
    }

    n = tell_insertion(arr,relative,size) ;

    if ( size  == 2 ) {
        printf("Insertion Sort\n") ;
    printf("%d %d",relative[0],relative[1]) ;
    }

    else {
        if ( (n != 0) ){
        
        printf("Insertion Sort\n") ;
        sort(arr,n)  ;
        for ( i = 0; i < size -1 ;i++)
            printf("%d ",arr[i]) ;
        printf("%d",arr[size-1]) ;
    }

    else {

        printf("Merge Sort\n") ;
        merge_sort(arr_,size,relative_) ;
        for ( i =0 ; i < size-1 ;i++)
            printf("%d ",arr_[i]) ;
        printf("%d",arr_[size-1]) ;
    }
   }
    return 0 ; 
}

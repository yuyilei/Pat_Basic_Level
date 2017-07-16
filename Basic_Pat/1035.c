#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b)
{
     return(*(int *)a-*(int *)b);
}

void merge(int *arr , int left , int middle , int right , int size) {

    int i = left , j = middle + 1 , k ;
    int temp_arr[size] ;

    for ( k = left ; k <= right ; k++) 
        temp_arr[k] = arr[k] ;

    for ( k = left ; k <= right ; k++){
    
        if ( i > middle )
            arr[k] = temp_arr[j++] ;
        else if ( j > right )
            arr[k] = temp_arr[j++] ;
        else if ( temp_arr[i] < temp_arr[j])
            arr[k] = temp_arr[i++] ;
        else 
            arr[k] = temp_arr[j++] ;
    }
}

void merge_sort(int *arr , int size) {

    int n ;
    int i ;
    int right ;
    for ( n = 1 ; n < size ; n *= 2) {
    
        for ( i = 0 ; i < size-n ; i += 2*n) {
        
            if ( (i+2*n - 1) < (size -1))
                right = i + 2*n - 1 ;
            else 
                right = size - 1 ;
            merge(arr , i , i+n-1 , right , size) ;
        }
    }
}

int equal(int a[] , int b[] , int size) {

    int i ; 
    int flag = 0 ;
    for ( i = 0 ; i < size ; i++){
    
        if (a[i] != b[i]){
        
            flag = 1 ;
            break ;
        }
    }

    if (flag == 1)
        return 0 ; // 比较的两个数组不相同
    else 
        return 1 ;
}
int insert(int *a , int *b , int size ){

    int i , j; 
    int flag = 0 ;  
    int c[size] ;
    int count = 0 ;

    for ( i = 0 ; i < size -1 && count != 0 ; i++) {
    
        if (b[i] <= b[i+1]) ;
        else {
            count = i ;
            for ( j = i ; j < size ; j++){
            
                if (a[j] == b[j]) ;
                else  {
                    flag = 1 ; // 不是插入排序 , 跳出循环 
                    break ; 
                }
            }
        }

        if (flag == 1) 
            break ;
        
    }

    if (flag == 1 ) 
        return 0 ; // 不是插入排序
    else 
        return count  ; // 是插入排序 ,返回已经排序的个数 .

   
}


int main () {

    int size ; 
    int i ,  j ;
    int k ;
    int a[100] ;
    int b[100] ;
    int temp ; 

    scanf("%d",&size) ;

    for ( i = 0 ; i < size ; i++) 
        scanf("%d", &a[i]) ;

    for ( i = 0 ; i < size ; i++)
        scanf("%d", &b[i]) ;

    if ( insert(a,b,size) != 0 ){
    
        k = insert(a,b,size) ;
        temp = b[k] ; 
        b[k] = b[k+1] ;
        b[k+1] = temp ;

        printf("Insertion Sort\n") ;

        for (i = 0 ; i < size -1 ; i++)
            printf("%d ",b[i]) ;

        printf("%d",b[size-1]) ;
    }

    else {
        for ( i = 0 ; ; i++){
        
            merge_sort(a ,size) ;
            if ( equal(a,b,size) == 1 ){
            
                merge_sort(a,size ) ;
                break ;
            }
        }
        printf("Meger Sort\n") ; 
        for ( i = 0 ; i < size -1 ; i++)
            printf("%d ",a[i]) ;
        printf("%d",a[size-1]) ;
    }
    
    return 0 ; 
}

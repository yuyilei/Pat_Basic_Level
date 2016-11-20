/*输出PATest*/

#include<stdio.h>

int main (){

    char a[1000] = " ";
    int n[6];
    int i ;

    scanf("%s",a);

    for ( i = 0 ; a[i] != NULL ; i++){
    
        switch ( a[i]) {
        
            case 'P' : n[0]++; break ;
            case 'A' : n[1]++; break ;
            case 'T' : n[2]++; break ;
            case 'e' : n[3]++; break ;
            case 's' : n[4]++; break ;
            case 't' : n[5]++; break ;
        }
    }

    for (  i = 0 ; i < 6 ; i++ ) {
    
        switch ( i) {
        
            case 0 : printf("P");  break ;
            case 1 : printf("A");  break ;
            case 2 : printf("T");  break ; 
            case 3 : printf("e");  break ;
            case 4 : printf("s");  break ;
            case 5 : printf("t");  break ;         
        }
        a[i] = a[i] -1 ;
            if ( i = 5 ,  a[0] != NULL || a[1] != NULL || a[2] != NULL || a[3] != NULL || a[4] != NULL || a[5] != NULL )
                i = 0 ; 
    }
    return 0 ;

}

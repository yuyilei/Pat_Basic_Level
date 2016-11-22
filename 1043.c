/*输出PATest*/

#include<stdio.h>

int main (){

    char a[1000] = " ";
    int n[6];
    int i ;

    scanf("%s",a);

    for ( i = 0 ; a[i] != '\0' ; i++){
    
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
            if ( i == 5 ,  a[0] != '\0' || a[1] != '\0' || a[2] != '\0' || a[3] != '\0' || a[4] != '\0' || a[5] != '\0' )
                i = 0 ; 
    }
    return 0 ;

}

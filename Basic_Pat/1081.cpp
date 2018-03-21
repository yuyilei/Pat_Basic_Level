#include<cstdio>
#include<cstring> 
using namespace std ; 

int main() {
    int n, i, j ; 
    scanf("%d",&n) ; 
    getchar() ;                                                         // 用 getchar() 获取一个换行 。。。 
    for ( i = 0 ; i < n ; i++ ) {
        char psd[100] ;
        gets(psd) ;                                                     // 不知道为什么用scanf不行，要用gets获取一行字符 
        if ( strlen(psd) < 6 ) {
            printf("Your password is tai duan le.\n") ; 
            continue ; 
        }
        int fy = 0, fd = 0, fe = 0 ; 
        for ( j = 0 ; j < strlen(psd) ; j++ ) {
            if ( (psd[j] >= 'a' && psd[j] <= 'z') || (psd[j] >= 'A' && psd[j] <= 'Z') ) 
                fy = 1 ; 
            else if ( psd[j] >= '0' && psd[j] <= '9' ) 
                fd = 1 ; 
            else if ( psd[j] != '.' ) 
                fe = 1 ; 
        }
        bool yes = ( !fe && fy && fd ) ; 
        if ( yes ) 
            printf("Your password is wan mei.\n") ; 
        else if ( !yes && fe ) 
            printf("Your password is tai luan le.\n") ; 
        else if ( !yes && !fd ) 
            printf("Your password needs shu zi.\n") ; 
        else if ( !yes && !fy ) 
            printf("Your password needs zi mu.\n") ; 
    }
    return 0 ; 
}
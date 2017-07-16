#include<stdio.h>
int sum(char n[18]){

    int a[18] ;
    int i ;
    long sum ; 
    for ( i = 0 ; i < 17 ; i ++ )
        a[i] = (int)(n[i]-'0');

    sum=a[0]*7+a[1]*9+a[2]*10+a[3]*5+a[4]*8+a[5]*4+a[6]*2+a[7]*1+a[8]*6+a[9]*3+a[10]*7+a[11]*9+a[12]*10+a[13]*5+a[14]*8+a[15]*4+a[16]*2;

    return  sum ; 
}

int main(){

    int  n ;
    char a[100][18] ;
    int  i, j; 
    long mo, _sum;
    int count = 0 ; 

    scanf("%d",&n) ;
    for ( i = 0 ; i < n ; i++ )
        scanf("%s",a[i]) ;

    for ( i = 0 ; i < n ; i++ ){
        _sum = sum(a[i]);
        mo = _sum % 11;
        printf("%ld\n",mo) ;
        if ( (mo == 0) && ((int)(a[i][17]-'0') != 1) ){
            printf("%s\n",a[i]) ;
            count++ ;
        }

        else if ( (mo == 1) && ((int)(a[i][17]-'0') != 0) ){
            printf("%s\n",a[i]) ;
            count++ ;
        }

        else if( (mo == 2) &&  (a[i][17] != 'X') ){
            printf("%s\n",a[i]);
            count++ ;
        }

        else if ( (mo >= 3 && mo <= 10) && ((int)(a[i][17]-'0') != 12 - mo)) {
            printf("%s\n",a[i]) ;
            count++ ;
        }
    }

    if ( count == 0 )
        printf("All passed") ;
    return 0 ;

}

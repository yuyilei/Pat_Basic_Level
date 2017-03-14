#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std ;

struct one {

    long no ;
    int de ;
    int cai ;
} ;

struct two {

    long no ;
    int de ;
    int cai ;
} ;

struct three {

    long no ;
    int de ;
    int cai ;
} ;

struct four {

    long no ;
    int de ;
    int cai ; 
} ;

int cmp1( struct one a , struct one b ){

    if ( (a.de+a.cai) != (b.de+b.cai)){
    
        return (a.de+a.cai)>(b.de+b.cai) ;
    }
    else if ( a.de != b.de ){
    
        return a.de > b.de ;
    }
    else 
        return a.no < b.no ;
}


int cmp2( struct two a , struct two b ){

    if ( (a.de+a.cai) != (b.de+b.cai)){
        
            return (a.de+a.cai)>(b.de+b.cai) ;
        }
    else if ( a.de != b.de ){
        
            return a.de > b.de ;
        }
    else 
        return a.no < b.no ;
}

int cmp3( struct three a , struct three b ){

    if ( (a.de+a.cai) != (b.de+b.cai)){
        
            return (a.de+a.cai)>(b.de+b.cai) ;
        }
    else if ( a.de != b.de ){
        
            return a.de > b.de ;
        }
    else 
        return a.no < b.no ;
}

int cmp4( struct four a , struct four b ){

    if ( (a.de+a.cai) != (b.de+b.cai)){
        
            return (a.de+a.cai)>(b.de+b.cai) ;
        }
    else if ( a.de != b.de ){
        
            return a.de > b.de ;
        }
    else 
        return a.no < b.no ;
}




int main() {

    int number ;
    int l ;
    int h ;
    cin >> number ;
    cin >> l ;
    cin >> h ;
    int i ;
    int a=0 , b=0 ,c=0 , d=0 ;
    struct one *aa = new struct one [100000] ;
    struct two *bb = new struct two [100000] ;
    struct three *cc = new struct three[100000] ;
    struct four *dd = new struct four[100000] ;

    for ( i = 0 ; i < number ; i++) {
    
        int no1 ;
        int de1 ;
        int cai1 ;
        cin >> no1 >> de1 >> cai1 ; 

        if ( de1 >= h && cai1 >= h ){
            int index = a ;
            aa[a].no = no1 ;
            aa[a].de = de1 ;
            aa[a].cai = cai1 ;
            a++ ;
        }

        else if ( de1 >= h && cai1 < h && cai1 >= l){
        
            int index = b ;
            bb[b].no = no1 ;
            bb[b].de = de1 ;
            bb[b].cai = cai1 ;
            b++ ;
        }

        else if ( de1 < h && de1 >= l && cai1 < h && cai1 >= l && de1 >= cai1 ) {
        
            int index = c ;
            cc[c].no = no1 ;
            cc[c].de =de1 ;
            cc[c].cai = cai1 ;
            c++ ;
        }

        else if ( de1 < h && de1 >= l &&  cai1 >= l && de1 < cai1 ) {
        
            int index = d ;
            dd[d].no = no1 ;
            dd[d].de = de1 ;
            dd[d].cai = cai1 ;
            d++ ;
        }
    }

    sort(aa,aa+a,cmp1) ;
    sort(bb,bb+b,cmp2) ;
    sort(cc,cc+c,cmp3) ;
    sort(dd,dd+d,cmp4) ;
    
    cout << a+b+c+d << endl ;
    for ( i = 0 ; i < a ; i++) 
        printf("%ld %d %d\n",aa[i].no,aa[i].de,aa[i].cai);
    
    for ( i = 0 ; i < b ; i++)
        printf("%ld %d %d\n",bb[i].no,bb[i].de,bb[i].cai);
    
    for ( i = 0 ; i < c ; i++)
        printf("%ld %d %d\n",cc[i].no,cc[i].de,cc[i].cai);

    for ( i = 0 ; i < d ; i++)
        printf("%ld %d %d\n",dd[i].no,dd[i].de,dd[i].cai);   

    return 0 ;

}

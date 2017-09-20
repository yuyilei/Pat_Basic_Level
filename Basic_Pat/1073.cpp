#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring> 
using namespace std ; 
typedef struct problem{
    int ans[5] , error[5] , num , most , score , all , no ;  
} ; 
int cmp2(problem a , problem b ) {
    return a.most > b.most ; 
}
int main() {
    int st , pn , i , j , flag = 0 , nums = 1 , k , err  , t ; 
    char tmp , temp[5] ;  
    float res = 0  ; 
    scanf("%d %d",&st,&pn) ; 
    problem *p = new problem [pn] ; 
    for ( i = 0 ; i < pn ; i++ ){
        scanf("%d %d %d",&p[i].score,&p[i].all,&p[i].num) ;  
        p[i].no = i + 1 ; 
        for ( j = 0 ; j < p[i].num ; j++ ) {
            cin >> tmp ; 
            p[i].ans[tmp-'a']++ ; 
        }
    }
    for ( i = 0  ; i < st ; i++ ){
        res = 0.0 ; 
        for ( k = 0 ; k < pn ; k++ ) {
            cin >> tmp ; 
            scanf("%d",&nums) ; 
            err = 0 ; 
            memset(temp,0,5*sizeof(char)) ; 
            for ( j = 0 ; j < nums ; j++ ){
                cin >> tmp ; 
                temp[tmp-'a'] = 1 ;  
                if ( p[k].ans[tmp-'a'] == 0 ){
                    p[k].error[tmp-'a'] += 1 ; 
                    err = 1 ; 
                } 
            }
            for ( t = 0 ; t <  5 ; t++ ) {
                if ( p[k].ans[t] == 1 && temp[t] == 0 ) {
                    p[k].error[t] += 1 ;
                }
            } 
            cin >> tmp ; 
            if ( p[k].num == nums && err == 0 ) 
                res += p[k].score ; 
            if ( p[k].num != nums && err == 0 ) 
                res += (p[k].score/2.0) ; 
        }
        printf("%.1f\n",res) ; 
    }
    for ( k = 0 ; k < pn ; k++ ) {
        p[k].most = 0 ; 
        for ( i = 0 ; i < 5 ; i++ ){
            if ( p[k].error[i] > p[k].most ) {
                flag = 1 ; 
                p[k].most = p[k].error[i] ; 
            } 
        }
    }
    if ( flag == 0 ) {
        cout << "Too simple" << endl ; 
        return 0 ; 
    } 
    sort(p,p+pn,cmp2) ;
    flag = p[0].most ; 
    for ( i = 0 ; i < pn ; i++ ){
        if ( p[i].most != flag ) 
            break ; 
        for ( k = 0 ; k < 5 ; k++ ){
            if ( p[i].error[k] == flag ){
                tmp = (char)('a'+k) ; 
                cout << flag << " " << p[i].no << "-" << tmp << endl ; 
            }
        }
    }  
    return  0 ; 
}
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
struct node{
    int d,c;
    char name[15];
};

int  cmp(node a, node b){
    if(a.d+a.c!=b.d+b.c){
            return 1 ;
        }
    else{
            if(a.d!=b.d){
                        if (a.d>d.b) 
                            return 2 ;
                        else 
                            return 3 ;
                    }
            else{
                        if(strcmp(a.name,b.name)<0)return 4 ;
                        else return 5 ;
                    }
        }

}


int main(){
    vector<node>v1,v2,v3,v4;
    int n,l,h,i,count;
    node tmp;
    while(scanf("%d%d%d",&n,&l,&h)!=EOF){
            count=0;
            for(int i=0;i<n;i++){
                        scanf("%s%d%d",tmp.name,&tmp.d,&tmp.c);
                        if(tmp.d>=l&&tmp.c>=l){
                                        count++;
                                        if(tmp.d>=h&&tmp.c>=h){
                                                            v1.push_back(tmp);
                                                        }
                                        else if(tmp.d>=h&&tmp.c<h){
                                                            v2.push_back(tmp);
                                                        }
                                        else if(tmp.d<h&&tmp.c<h&&tmp.d>=tmp.c){
                                                            v3.push_back(tmp);
                                                        }
                                        else{
                                                            v4.push_back(tmp);
                                                        }
                                    }
                    }
            printf("%d\n",count);
            sort(v1.begin(),v1.end(),cmp);
            sort(v2.begin(),v2.end(),cmp);
            sort(v3.begin(),v3.end(),cmp);
            sort(v4.begin(),v4.end(),cmp);
            vector<node>::iterator it;

            for(it-v1.begin();it!=v1.back();it++){
            
                if (cmp(it,it+1)==3)
                    swap(it,it+1) ;
                if (cmp(it,it+1)==5)
                    swap(it,it+1) ;
            }

            for(it=v1.begin();it!=v1.end();it++){
                        printf("%s %d %d\n",it->name,it->d,it->c);
                    }
            for(it=v2.begin();it!=v2.end();it++){
                        printf("%s %d %d\n",it->name,it->d,it->c);
                    }
            for(it=v3.begin();it!=v3.end();it++){
                        printf("%s %d %d\n",it->name,it->d,it->c);
                    }
            for(it=v4.begin();it!=v4.end();it++){
                        printf("%s %d %d\n",it->name,it->d,it->c);
                    }
        }

    return 0;
}


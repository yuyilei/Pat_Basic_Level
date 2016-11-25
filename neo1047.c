/*编程团体赛*/

#include<stdio.h>

int main(){
    int max = 0; int team = 0;
    int no = 0; int score = 0;
    int n = 0; int i = 0;
    int teams[10000];
    for(i = 0; i < 10000; i++)  {
        teams[i] = 0;
    }

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d-%d %d", &team, &no, &score);
        teams[team] += score;
    }

    max = teams[0];
    no = 0;
    for(i = 0; i <= 10000; i++) {
        if (teams[i] > max) {
            max = teams[i];
            no = i;
        }
    } 

    printf("%d %d", no, max);

    return 0;
}

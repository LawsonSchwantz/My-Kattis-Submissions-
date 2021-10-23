#include <stdio.h>
#include <string.h>


int main(){

    int t, ans = 0;
    scanf("%d", &t);
    int n;
    scanf("%d", &n);
    while(n--){
        int p;
        scanf("%d", &p);
        ans += t - p;
    }
    printf("%d\n", ans + t);

    return 0;

}

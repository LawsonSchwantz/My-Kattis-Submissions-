#include <stdio.h>
#include <string.h>


int main(){

    int t;
    scanf("%d", &t);
    while(t--){
        int n, ans = 0, j = 1;
        scanf("%d", &n);
        for(int i = 1; i <= n; i++){
            j *= i;
        }
        ans = j % 10;
        printf("%d\n", ans);
    }

    return 0;


}

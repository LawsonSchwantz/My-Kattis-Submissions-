#include <stdio.h>
#include <string.h>

 

int main(){

    int t;
    scanf("%d", &t);
    while(t--){
        int n, ans = 0;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
            ans += a[i];
        }
        printf("%d\n", ans - n + 1);
    }

    return 0;


}

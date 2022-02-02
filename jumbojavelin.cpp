#include <stdio.h>
#include <string.h>


int main() {

    int t, ans = 0;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        ans += n - 1;
    }
    printf("%d\n", ans + 1);

    return 0;
}

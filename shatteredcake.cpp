#include <stdio.h>
#include <string.h>



int main(){

    int t, w, l, ans = 0;
    scanf("%d", &w);
    scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d %d", &a, &b);
        ans += a * b;
    }
    l = ans / w;
    printf("%d\n", l);

    return 0;

}

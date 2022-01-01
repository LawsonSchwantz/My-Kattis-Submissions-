#include <stdio.h>
#include <string.h>

 //==

int main(){

    int t;
    scanf("%d", &t);
    while(t--){
        int a, b, ans = 0;
        scanf("%d %d", &a, &b);
        while(b > 0){
            ans += b + 1;
            b--;
        }
   
        printf("%d %d\n", a, ans);
    }

    return 0;

}

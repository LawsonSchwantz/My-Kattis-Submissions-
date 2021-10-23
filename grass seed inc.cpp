#include <stdio.h>
#include <string.h>

int main(){
   
    double t, ans = 0;
    scanf("%lf", &t);
    int n;
    scanf("%d", &n);
    while(n--){
        double a, b;
        scanf("%lf %lf", &a, &b);
        ans += a * b;
    }
    ans *= t;
    printf("%.7lf", ans);

    return 0;

}

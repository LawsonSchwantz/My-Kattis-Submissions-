#include <stdio.h>
#include <string.h>

 // QALY

int main(){
   
    int t;
    double ans = 0.0;
    scanf("%d", &t);
    while(t--){
        double a, b;
        scanf("%lf %lf", &a, &b);
        ans += a*b;
    }
    printf("%.3lf\n", ans);

    return 0;

}

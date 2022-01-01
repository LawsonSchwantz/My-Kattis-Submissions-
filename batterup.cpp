#include <stdio.h>
#include <string.h>


int main(){

    int n;
    double ans, res = 0, rem = 0;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(a[i] < 0){
            a[i] = 0;
            rem++;
        }
        res += a[i];
    }
    ans = res / (n - rem);
    printf("%lf\n", ans);

    return 0;

}

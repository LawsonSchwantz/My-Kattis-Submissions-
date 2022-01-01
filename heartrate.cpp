#include <stdio.h>
#include <string.h>


int main(){

    int t;
    scanf("%d", &t);
    while(t--){
        int a;
        double b, c, d;
        scanf("%d %lf", &a, &b);
        c = 60/b;
        d = a * c;
        printf("%.4lf %.4lf %.4lf\n", d - c, d, d + c);
    }

    return 0;

}

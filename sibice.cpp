#include <stdio.h>
#include <string.h>



int main(){

    int t, w, h;
    scanf("%d %d %d", &t, &w, &h);
    double max = w*w + h*h;
    while(t--){
        int n;
        scanf("%d", &n);
        (n*n <= max) ? printf("DA\n") : printf("NE\n");
    }
     

    return 0;

}

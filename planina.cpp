#include <stdio.h>
#include <string.h>



int main(){

    int n;
    scanf("%d", &n);
    long long int num = 2;

    while(n > 0){
        num *= 2;
        num--;

        n--;
    }
    printf("%d\n", num * num);

    return 0;

}

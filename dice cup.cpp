#include <stdio.h>
#include <string.h>

int main(){

    int a, b, temp;
    scanf("%d %d", &a, &b);
    if(a > b){
        temp = a;
        a = b;
        b = temp;
    }
    for(int i = a + 1; i <= b + 1; i++){
        printf("%d\n", i);
    }

    return 0;

}

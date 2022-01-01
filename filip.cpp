#include <stdio.h>
#include <string.h>



int main(){

    int a, b, rem, ans = 0, rev = 0, rev2 = 0, rem2;
    scanf("%d %d", &a, &b);
    while(a > 0){
        rem = a % 10;
        rev = rev*10 + rem;
        a /= 10;
    }
    while(b > 0){
        rem2 = b % 10;
        rev2 = rev2*10 + rem2;
        b /= 10;
    }
    if(rev > rev2){
        printf("%d\n", rev);
    }else{
        printf("%d\n", rev2);
    }

    return 0;

}

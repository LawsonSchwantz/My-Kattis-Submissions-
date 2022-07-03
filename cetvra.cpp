#include <stdio.h>
#include <string.h>


int same(int a, int b, int c) {
    if(a == b) {
        return c;
    }
    if(b == c) {
        return a;
    }
    return b;
}

int main(){

    int a1, b1, a2, b2, a3, b3;
    scanf("%d %d", &a1, &b1);
    scanf("%d %d", &a2, &b2);
    scanf("%d %d", &a3, &b3);
    printf("%d %d\n", same(a1, a2, a3), same(b1, b2, b3));
    
    
     

    return 0;

}

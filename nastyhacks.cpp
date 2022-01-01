#include <stdio.h>
#include <string.h>


int main(){

    int t;
    scanf("%d", &t);
    while(t--){
        long long int r, e, c;
        scanf("%lld %lld %lld", &r, &e, &c);
        if(r + c < e){
            printf("advertise\n");
        }else if(r + c == e){
            printf("does not matter\n");
        }else if(r + c > e) {
            printf("do not advertise\n");
        }
    }

    return 0;

}

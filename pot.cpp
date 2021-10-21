#include <stdio.h>
#include <string.h>
#include <math.h>

//pot

int main(){
    
    int t;
    long long int ans = 0;
    scanf("%d", &t);
    while(t--){
        long long int n; 
        scanf("%lld", &n);
        ans += pow(n/10, n%10);
    }
    printf("%lld\n", ans);

    return 0;
}

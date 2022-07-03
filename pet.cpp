#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(){

    int a, b, c, d, ans, total[5], temp, temp2, pos[5] = {1,2,3,4,5};
    for(int  i = 0; i < 5; i++){
        scanf("%d %d %d %d", &a, &b, &c, &d);
        ans = a + b + c + d;
        total[i] = ans;
    }
    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 5; j++){
            if(total[i] < total[j]){
                temp = total[i];
                total[i] = total[j];
                total[j] = temp;
                temp2 = pos[i];
                pos[i] = pos[j];
                pos[j] = temp2;
            }
        }
    }
    printf("%d %d\n", pos[0], total[0]);

    return 0;

}

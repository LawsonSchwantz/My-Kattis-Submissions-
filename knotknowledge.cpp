#include <stdio.h>
#include <string.h>

int main(){

   int t;
   scanf("%d", &t);
   int a[t],b[t - 1];
   for(int i = 0; i < t; i++){
       scanf("%d", &a[i]);
   }
    for(int i = 0; i < t - 1; i++){
        scanf("%d", &b[i]);
    }
    bool ans = false;
    for(int i = 0; i < t; i++){
        ans = false;
        for(int j = 0; j < t - 1; j++){
            if(a[i] == b[j]){
                ans = true;
                break;
            }
        }
        if(!ans){
            printf("%d\n", a[i]);
            break;
        }
    }

      


    return 0;

}

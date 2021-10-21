#include <stdio.h>
#include <string.h>

 //bijele

int main(){
   
   int a[6] = {1,1,2,2,2,8};
   int b[6], c[6];
   for(int i = 0; i < 6; i++){
       scanf("%d", &b[i]);
       c[i] = a[i] - b[i];
   }
   for(int i = 0; i < 6; i++){
       printf("%d ", c[i]);
   }

    return 0;

}

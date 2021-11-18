#include <stdio.h>
#include <string.h>

// odd kattis

int main(){

   int t;
   scanf("%d", &t);
   char s[255];
   for(int i = 1; i <= t; i++){
       scanf("%s", s);
       if(i % 2 == 1){
           printf("%s\n", s);
       }
   }

    return 0;
}

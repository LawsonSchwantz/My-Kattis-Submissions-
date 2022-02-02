#include <stdio.h>
#include <string.h>


int main() {

   char s[100];
   int ans = 0;
   scanf("%s", s);
   for(int i = 0; i < strlen(s); i++){
       if(s[i] == s[i + 2] || s[i] == s[i + 1]){
           ans++;
       }
   }
   if(ans == 0){
       printf("1\n");
   }else{
       printf("0\n");
   }

    return 0;
}

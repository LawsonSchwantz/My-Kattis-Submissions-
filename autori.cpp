#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(){

   char s[255];
   scanf("%s", s);
   for(int i = 0; i < strlen(s); i++){
       if(s[i] >= 65 && s[i] <= 90){
           printf("%c", s[i]);
       }
   }

    return 0;
}

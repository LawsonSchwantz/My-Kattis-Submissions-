#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){

   char s1[1000], s2[1000];
   scanf("%s", s1);
   scanf("%s", s2);
   if(strlen(s1) < strlen(s2)){
       printf("no\n");
   }else{
       printf("go\n");
   }

    return 0;

}

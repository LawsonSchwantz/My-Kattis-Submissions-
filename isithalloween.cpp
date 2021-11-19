#include <stdio.h>
#include <string.h>


int main(){

   char s[255];
   int a;
   scanf("%s %d", s, &a);
   if(strcmp(s, "OCT") == 0 && a == 31 ||strcmp(s, "DEC") == 0 && a == 25){
       puts("yup");
   }else{
       puts("nope");
   }

    return 0; 
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>




int main(){

    char s[255];
    scanf("%s", s);
    for(int i = 0; i < strlen(s); i++){
        if(s[i] != s[i+1]){
            printf("%c", s[i]);
        }
    }

    return 0;

}

#include <stdio.h>
#include <string.h>
#include <math.h>

// encoded message

int main(){

    int t;
    scanf("%d", &t);
    while(t--){

        char s[10100];
        scanf("%s", s);
        int n = sqrt(strlen(s));
        char pri[10100][10100];
        int a = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                pri[i][j] = s[a];
                a++;
        }
    }
    for(int j = n - 1; j >= 0; j--){
        for(int i = 0; i < n; i++){
            printf("%c", pri[i][j]);
        }
    }
    printf("\n");

        
    }

    return 0; 
    
    }

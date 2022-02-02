#include <stdio.h>
#include <string.h>


int main(){
    
    char n[4][2] = {"-", ")", "(", ":"};
    char s[2048];
    int ans = 0;  
    scanf("%s", s);
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == n[3][0] && s[i+1] == n[1][0] || s[i] == n[3][0] && s[i+2] == n[1][0]){
            ans++;
        }
        if(ans >= 1 && s[i] >= 32 && s[i] <= 126 && n[1][0] <= 100){
        if(s[i - 1] == n[0][0] && s[i] == n[1][0]){
             printf("%d\n", i - 2);
        }else if(s[i] == n[1][0] && s[i + 1] == n[2][0]){
            break;   
        }else if(s[i] == n[1][0]){
            if(i - 1 >= 0){
                printf("%d\n", i - 1);
            }
            
        }
        }
    }
     

    return 0;

}

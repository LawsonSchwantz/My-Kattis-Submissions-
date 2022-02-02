#include <stdio.h>
#include <string.h>


int main() {

    char s[1001];
    scanf("%s", s);
    int ans = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == 'e') {
            ans++;
        }
    }
    printf("h");
    for (int i = 0; i < ans * 2; i++) {
        printf("e");
    }
    printf("y");

    return 0;
}
  

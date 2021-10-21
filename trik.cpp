#include <stdio.h>
#include <string.h>

// trik

int main(){
    
  char s[1000];
  int x = 1;
  scanf("%s", s);
  for(int i = 0; i < strlen(s); i++){
      if(s[i] == 65){
            if(x==1){
                x++;
            }
            else if(x==2){
                x--;
            }
     }else if(s[i] == 66){
            if(x==2){
                x++;
            }
            else if(x==3){
                x--;
            }
      }else if(s[i] == 67){
            if(x==1){
                x += 2;
            }
            else if(x==3){
                x -= 2;
            }
      }
  }
    printf("%d\n", x);
  

  
    return 0;
}

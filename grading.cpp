#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){

    int a, b, c, d, e,f;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    scanf("%d", &f);
    if(f >= a){
        printf("A\n");
    }else if(f >= b){
        printf("B\n");
    }else if(f >= c){
        printf("C\n");
    }else if(f >= d){
        printf("D\n");
    }else if(f >= e){
        printf("E\n");
    }else{
        printf("F\n");
    }

    return 0;

}

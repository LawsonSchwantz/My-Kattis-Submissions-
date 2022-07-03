#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main(){

    int h;
    double v;
    scanf("%d %lf", &h, &v);
    printf("%.0lf\n", ceil(h / sin(v * 3.14159265 / 180))); 


    return 0;

}

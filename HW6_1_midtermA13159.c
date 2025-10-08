
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int h;

int main(){

    scanf("%d", &h);

    for(int i=0; i<h; i++){
        for(int j=h; j>i; j--) printf("*");
        if(i!=h-1)printf("\n");
    }
    
    return 0;
}

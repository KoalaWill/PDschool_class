
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

char v[100];

int main(){

    fgets(v, sizeof(v), stdin);
    for(int i=sizeof(v)/sizeof(v[0]); i>=0; i--){
        if(v[i]>='0' && v[i]<='z') printf("%c", v[i]);
    }
    
    return 0;
}

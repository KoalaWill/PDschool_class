#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

// OJ 13148

int input;
bool flag = false;

int main(void){
    
    //input
    scanf("%d", &input);

    //calc
    flag = !(input%2);
    for(int i=3; i*i<=input; i+=2){
        if(!(input%i)) flag = true;
    }

    //output
    if(!flag) printf("Prime");
    else printf("Not");
    
    
    return 0;
}
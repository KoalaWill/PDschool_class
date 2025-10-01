#include<stdio.h>

// OJ 12696 (quiz2)

char input;

int main(void){

    //input
    scanf("%c", &input);

    if( (input-'0'>=0) && (input-'9'<=0) ){
        printf("Number %c", input); 
    }
    else if( (input-'a'>=0) && (input-'z'<=0)){
        input = 'A'+ (input-'a');
        printf("%c", input);
    }
    else if( (input-'A'>=0) && (input-'Z'<=0)){
        input = 'a'+ (input-'A');
        printf("%c", input);
    }


}
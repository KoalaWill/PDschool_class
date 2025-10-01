#include<stdio.h>

// OJ 12697

int x,y;

int main(void) {
    
    // Input
    scanf("%d %d", &x, &y);

    // Special Case
    if(!x && !y){
        printf("o");
        return 0;
    }
    else if(!x){
        printf("y");
        return 0;
    }
    else if(!y){
        printf("x");
        return 0;
    }

    // Normal Case
    if(x>0){
        if(y>0){
            printf("1"); //++
        } 
        else{
            printf("4"); //+-
        }
    }
    else{
        if(y>0){
            printf("2"); //-+
        }
        else{
            printf("3"); //--
        }
    }

    return 0;
}
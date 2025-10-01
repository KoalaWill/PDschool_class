#include<stdio.h>
#include<math.h>

// OJ 13138

int main(void) {
    int A, B; 
    const float pi = 3.14f;
    scanf("%d %d", &A, &B); //input

    printf("%d %d\n%d", A+B, A-B, A*B); 

    return 0;
}
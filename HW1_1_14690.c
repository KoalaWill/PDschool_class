#include<stdio.h>
#include<math.h>

// OJ 14690

// requirements for HW1_1:
// 1. print the 3 numbers reversed
// 2. print the 3 numbers again in 16-base
// 3. print the sum
// 4. print n1*pi
// 5. print n2/n3(to 3)

int main(void) {
    int n1, n2, n3; 
    //float pi=3.14;
    //input
    scanf("%d %d %d", &n1, &n2, &n3); 
    // float fn1=(float)n1;
    // float fn2=(float)n2;

    //output
    printf("%d %d %d\n", n3, n2, n1); //1

    printf("%X %X %X\n", n1, n2, n3); //2

    printf("%d\n", n1+n2+n3); //3

    printf("%f\n", n1*3.14); //4
    
    printf("%.3f", n1/(float)n2); //5

    return 0;
}
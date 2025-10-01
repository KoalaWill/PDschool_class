#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

// OJ 13682

int compare(const void * a, const void * b) {
    return *(int *)a - *(int *)b;
}

int input[10];

int main(){

    // Input
    for(int i=0; i<10; i++){

        scanf("%d", &input[i]);

    }

    // Sort
    qsort(input, 10, sizeof(int), compare);

    // Output
    for(int i=0; i<10; i++){
        if (i==0) printf("%d", input[i]);
        else printf(" %d", input[i]);
    }
    

    return 0;
}
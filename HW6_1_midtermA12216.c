#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int compare(const void* a, const void *b){
    return(*(int*)a - *(int*)b);
}

int main(){

    int m, n, k;
    
    scanf("%d", &m);scanf("%d", &n);scanf("%d", &k);

    int A[m+1][n+1];
    int B[n+1][k+1];
    int C[m+1][k+1]; 

    memset(C, 0, sizeof(C));

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<k; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            for(int p=0; p<k; p++){
                C[i][p] += A[i][j] * B[j][p];
            }
        }
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<k; j++){
            if(j) printf(" %d", C[i][j]);
            else printf("%d", C[i][j]);
        }
        if(i!=m-1) printf("\n");
    }
    
    return 0;
}

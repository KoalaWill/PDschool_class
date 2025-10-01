#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fin, * fout ;
    int A[3][3],AT[3][3] ;

    fin = fopen("C:\\Users\\Koala_Lin\\Desktop\\test2.txt", "r") ;
    if (fin == NULL){
        printf("Error!") ;
        exit(1) ;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            fscanf(fin, "%d", &A[i][j]);
        }
    }
    fclose(fin);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            AT[j][i] = A[i][j];
        }
    }
    fout = fopen("output.txt", "w");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            fprintf(fout, "%d ", AT[i][j]);
        }
        fprintf(fout, "\n");
    }
    fclose(fout);
    return 0;
}
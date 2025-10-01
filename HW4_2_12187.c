#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>

// OJ 12187

char command[5];
int AnsSum=0, AnsN=0, n, tmp, tmpMx=INT_MIN, tmpMn=INT_MAX, q;

int main(){

    // Input
    scanf("%d", &q);
    q*=2;

    while(q--){

        tmpMx=INT_MIN;
        tmpMn=INT_MAX;

        fgets(command, sizeof(command), stdin);

        if(strstr(command, "sum")){

            scanf("%d",&n);

            for(int i=0; i<n; i++){

                scanf("%d", &tmp);
                AnsSum += tmp;
                AnsN++;

            }

        }
        else if(strstr(command, "max")){

            for(int i=0; i<3; i++){

                scanf("%d", &tmp);
                tmpMx = fmax(tmpMx, tmp);

            }

            AnsSum += tmpMx;
            AnsN++;
        }
        else if(strstr(command, "min")){

            for(int i=0; i<3; i++){

                scanf("%d", &tmp);
                tmpMn = fmin(tmpMn, tmp);

            }

            AnsSum += tmpMn;
            AnsN++;
        }
    }
    // Output
    printf("%d %d", AnsSum, AnsN);

    return 0;
}
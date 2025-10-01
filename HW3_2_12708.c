#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// OJ 12708

int l, r;
bool numArray[(int)1e5 + 5];

int main(void) {
    // init
    memset(numArray, true, sizeof(numArray));
    numArray[0] = false;
    numArray[1] = false;

    // input
    scanf("%d %d", &l, &r);

    // sieve
    for (int i = 2; i * i <= r; i++) {
        if (numArray[i]) {
            for (int j = i * i; j <= r; j += i) {
                numArray[j] = false;
            }
        }
    }

    // output
    bool first = true;
    for (int i = l; i <= r; i++) {
        if (numArray[i]) {
            if (!first) printf(" ");
            printf("%d", i);
            first = false;
        }
    }

    return 0;
}

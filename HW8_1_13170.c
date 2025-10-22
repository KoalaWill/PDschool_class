#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// OJ 13170

int main(void) {
    char input[32];   
    int sum = 0;
    int sign = 1;      // + or -
    int num = 0;       //10^n
    int in_number = 0;

    fgets(input, sizeof(input), stdin);
    for (int i = 0; input[i] != '\0'; i++) {
        char c = input[i];

        if (isdigit((unsigned char)c)) {
            num = num * 10 + (c - '0');
            in_number = 1;
        } else {
            if (in_number) {
                sum += sign * num;
                num = 0;
                in_number = 0;
            }
            if (c == '+') sign = 1;
            else if (c == '-') sign = -1;
            else if (c == '\n') break;
        }
    }

    if (in_number) {
        sum += sign * num;
    }

    printf("%d", sum);
    return 0;
}

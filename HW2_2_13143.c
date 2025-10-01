#include<stdio.h>

// OJ 13143

int p1, p2, s1, s2;

int main(void) {

    scanf("%d %d %d %d", &p1, &p2, &s1, &s2);
    if(!p1) {
        printf("1");
        return 0;
    }
    if(p2 && (s1>=30) && (s1<=70)) printf("2");
    else if (!p2 && ((s1<=50)||(s2>60)) ) printf("3");
    else printf("4");

    return 0;
}
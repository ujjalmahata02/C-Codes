#include<stdio.h>

int add(int, int);

int main() {
    int a, b, sum;
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);
    sum = add(a, b);
    printf("\nSum = %d", sum);
    return 0;
}

int add(int p, int q) {
    int t;
    t = p + q;
    return t;
}
#include <stdio.h>

int main()
{
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    int c = a % b;
    printf("KQL: %d ", c);
    return 0;
}
#include <stdio.h>

int main()
{
    int a;
    printf("Nhap tu 1 - 7 de chon ngay trong tuan: ");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("Mon");
    }
    else if (a == 2)
    {
        printf("Tue");
    }
    else if (a == 3)
    {
        printf("Wel");
    }
    else if (a == 4)
    {
        printf("Thu");
    }
    else if (a == 5)
    {
        printf("Fri");
    }
    else if (a == 6)
    {
        printf("Sat");
    }
    else if (a == 7)
    {
        printf("Sun");
    }
else
{
    printf("Nhap sai! Vui long nhap lai");
}
return 0;
}
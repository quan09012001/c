#include <stdio.h>

int main()
{
    int a;
    printf("Nhap tu 1 - 7 de chon ngay trong tuan: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("Mon");

            break;
    case 2:
        printf("Tue");

            break;
    case 3:
        printf("Wel");

            break;
    case 4:
        printf("Thu");

            break;
    case 5:
        printf("Fri");

            break;
    case 6:
        printf("Sat");

            break;
    case 7:
        printf("Sun");

            break;
    default:
    printf("Xin loi! mot tuan chi co 7 ngay!");
        break;
    }
    return 0;
}
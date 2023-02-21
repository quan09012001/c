#include <stdio.h>
/*  BÀI 1:
    Khai báo mảng one có 5 phần tử {2, 5, 3, 6, 3}
    Tạo một mảng two có 5 phần tử,
        với giá trị của các phần tử thỏa: two[i] = one [i] + 3;
        In ra mảng two;
    Tìm vị trí của các phần tử có giá trị bằng nhau
        trong mảng two;
*/
int main()
{
    int one[5] = {2, 5, 3, 6, 3};
    int two[5];
    for (int i = 0; i < 5; i++)
    {
        two[i] = one[i] + 3;
    }
    for (int j = 0; j < 5; j++)
    {
        printf("%d\t", one[j]);
    }
    printf("\n");
    for (int j = 0; j < 5; j++)
    {
        printf("%d\t", two[j]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (two[i] == two[j])
            {
                printf("\ntwo[%d] = two[%d]", i, j);
            }
        }
    }
    return 0;
}
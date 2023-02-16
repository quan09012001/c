#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 10)
    {
        printf("%d\n", i);
        i++;
        if (i % 4 == 0)
        {
            break;
        }
    }
    printf("%d\n", i);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a[5] = {5, 3, 13, 12, 12};
    for (int i = 1; i < 5; i++)
    {
        for (int j = i; j > 0 && a[j] < a[j - 1]; j--)
        {
            int temp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = temp;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
    system("pause");
    return 0;
}
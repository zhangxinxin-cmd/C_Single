#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void exch(int *a, int i, int j);
int main(void)
{
    int a[10] = {23, 12, 22, 34, 15, 8, 16, 23, 12, 15};
    int h = 1;
    int length = sizeof(a) / sizeof(int);
    while (h < length / 3)
    {
        h = 3 * h + 1;
    }
    while (h >= 1)
    {
        for (int i = h; i < length; i++)
        {
            for (int j = i; j >= h && a[j] < a[j - h]; j = j - h)
            {
                exch(a, j, j - h);
            }
        }
        h = h / 3;
    }
    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }
    system("pause");
    return 0;
}

void exch(int *a, int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
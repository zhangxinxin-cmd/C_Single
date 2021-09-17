#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main(void)
{
    int a[10] = {22, 12, 13, 11, 19, 9, 10, 13, 11, 8};
    int length = sizeof(a) / sizeof(int);
    int temp;
    int lastExchangeIndex = 0;
    int sortBorder = length - 1;
    ;
    for (int i = 0; i < length; i++)
    {
        bool isSorted = true;
        for (int j = 0; j < sortBorder; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                lastExchangeIndex = j;
                isSorted = false;
            }
        }
        sortBorder = lastExchangeIndex;
        if (isSorted)
            break;
    }
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", a[i]);
    }
    system("pause");
    return 0;
}
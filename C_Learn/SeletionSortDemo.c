#include <stdio.h>
#include <stdlib.h>
void exch(int *array, int i, int j);
int main(void)
{
    int a[10] = {23, 12, 22, 34, 15, 8, 16, 23, 12, 15};
    int length = sizeof(a) / sizeof(int);
    int min = 0;
    for (int i = 0; i < length; i++)
    {
        min = i;
        for (int j = i + 1; j < length; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        exch(a, i, min);
    }
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", a[i]);
    }
    system("pause");
    return 0;
}
void exch(int *array, int i, int j)
{
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

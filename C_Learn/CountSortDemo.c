#include <stdio.h>
#include <malloc.h>
#include <memory.h>
#include <stdlib.h>
void countSort(int *array, int length);
int main(void)
{
    int array[9] = {2, 1, 3, 0, 5, 10, 9, 7, 6};
    countSort(array, sizeof(array) / sizeof(int));
    for (int i = 0; i < sizeof(array) / sizeof(int); i++)
    {
        printf("%d ", array[i]);
    }
    system("pause");
    return 0;
}
void countSort(int *array, int length)
{
    int max = array[0];
    for (int i = 0; i < length; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    int *countArray = (int *)malloc(4 * (max + 1));
    if (countArray == NULL)
    {
        printf("内存分配失败");
    }
    else
    {
        memset(countArray, 0, sizeof(int) * (max + 1));
        for (int i = 0; i < length; i++)
        {
            countArray[array[i]]++;
        }
        int index = 0;
        for (int i = 0; i < max + 1; i++)
        {
            for (int j = 0; j < countArray[i]; j++)
            {
                array[index++] = i;
            }
        }
        free(countArray);
    }
}

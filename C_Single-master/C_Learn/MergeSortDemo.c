#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
void merge(int *array, int start, int mid, int end);
void mergeSort(int *array, int start, int end);
int main(void)
{
    int array[9] = {23, 12, 11, 14, 16, 22, 10, 5, 8};
    mergeSort(array, 0, sizeof(array) / sizeof(int) - 1);
    for (int i = 0; i < sizeof(array) / sizeof(int); i++)
    {
        printf("%d ", array[i]);
    }
    system("pause");
    return 0;
}
void mergeSort(int *array, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(array, start, mid);
        mergeSort(array, mid + 1, end);
        merge(array, start, mid, end);
    }
}
void merge(int *array, int start, int mid, int end)
{
    int length = end - start + 1;
    int *tempArray = (int *)malloc(sizeof(int) * (end - start + 1));
    int p1 = start;
    int p2 = mid + 1;
    int i = 0;
    int pElse;
    for (i = 0; i < length; i++)
    {
        if (array[p1] < array[p2])
        {
            tempArray[i] = array[p1++];
        }
        else
        {
            tempArray[i] = array[p2++];
        }
        if (p1 == mid + 1 || p2 == end + 1)
            break;
    }
    if (p1 == mid + 1)
        pElse = p2;
    else
        pElse = p1;
    while (i < length - 1)
    {
        tempArray[++i] = array[pElse++];
    }
    for (int j = 0; j < length; j++)
    {
        array[start + j] = tempArray[j];
    }
    free(tempArray);
}

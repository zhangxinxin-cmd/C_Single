#include <stdio.h>
#include <stdlib.h>
void quickSort(int *, int, int);
int partiton(int *, int, int);
int main(void)
{
    int array[8] = {12, 11, 13, 10, 7, 6, 8, 1};
    quickSort(array, 0, sizeof(array) / sizeof(int) - 1);
    for (int i = 0; i < sizeof(array) / sizeof(int); i++)
    {
        printf("%d ", array[i]);
    }
    system("pause");
    return 0;
}
void quickSort(int *array, int startIndex, int endIndex)
{
    if (startIndex >= endIndex)
        return;
    int pivotIndex = partiton(array, startIndex, endIndex);
    quickSort(array, startIndex, pivotIndex - 1);
    quickSort(array, pivotIndex + 1, endIndex);
}
int partiton(int *array, int startIndex, int endIndex)
{
    int pivot = array[startIndex];
    int left = startIndex;
    int right = endIndex;
    int index = startIndex;
    while (left <= right)
    {
        while (left <= right)
        {
            if (array[right] < pivot)
            {
                array[left] = array[right];
                index = right;
                left++;
                break;
            }
            right--;
        }
        while (left <= right)
        {
            if (array[left] > pivot)
            {
                array[right] = array[left];
                index = left;
                right--;
                break;
            }
            left++;
        }
    }
    array[index] = pivot;
    return index;
}

/*2021.09.17
二维数组作为函数参数，可以用数组指针 void (*p)[num]形式，也可以用二维数组 void array[num1][num2]形式，或者省略num1
*/
#include <stdio.h>
#include <stdlib.h>
//int (*p)[3]
void fun(int (*p)[3], int row, int width)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
}
int main(void)
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    fun(a, 2, 3);
    system("pause");
    return 0;
}
/*
字符数组，类似于整型数组
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    char chs[3] = {'a', 'd', 'e'};
    for (int i = 0; i < sizeof(chs) / sizeof(char); i++)
    {
        printf("chs[%d]=%d ", i, chs[i]);
    }
    printf("\n-----------------\n");
    char *ptr = chs;
    for (int j = 0; j < sizeof(chs) / sizeof(char); j++)
    {
        printf("*(ptr+%d)=%d", j, *(ptr + j));
    }
    system("pause");
    return 0;
}

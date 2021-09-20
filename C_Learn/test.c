#include <stdio.h>
#include <stdlib.h>
int *function(int array[]);
int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int *p = function(array);
    printf("%d", sizeof(p));
    printf("hello");
    printf("hello,world");
    system("pause");
    return 0;
}
int *function(int array[])
{
    return array;
}
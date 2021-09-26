/* 
2021.9.25
全局变量只能用常量来定义，不能用变量初始化，全局变量位置不能放可执行语句，如函数名
 */
#include <stdio.h>
#include <stdlib.h>
int a = 3;
int b[3];
int *p;
int main(int argc, char const *argv[])
{
    printf("Hello world");
    printf("%d\n", a);
    for (int i = 0; i < sizeof(b) / sizeof(int); i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    printf("%p", p);
    system("pause");
    return 0;
}

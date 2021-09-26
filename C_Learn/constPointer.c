/* 
2021.9.26
const 数据类型* 变量名; 可以修改p，但是不能修改*p
数据类型 * cosnt 变量名; 可以修改*p，但是不能修改p
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int a = 23;
    int b = 24;
    const int *p = &a; //int *
    p = &a;
    printf("%p\n", p);
    int *const q = &a;
    *q = 34;
    printf("%d", *q);

    system("pause");
    return 0;
}

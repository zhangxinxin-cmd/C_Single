#include <stdio.h>
#include <stdlib.h>
void fun()
{
    printf("我是函数\n");
}
int main(int argc, char const *argv[])
{
    fun();
    printf("%p\n%p\n", fun, &fun);
    void (*p)() = fun;
    printf("\n");
    p();
    system("pause");
    return 0;
}

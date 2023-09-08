/*
2021.9.23
枚举里面的值就是数字0，1，2，。。。。。。
但是也可以手动定义每个枚举值,后面的值会在最后一个手动定义的值基础上依次加一
枚举变量本质就是int类型变量，所以字节大小是4字节
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
enum Color
{
    enum_red = 20,
    enum_black = 10,
    enum_white = 15,
    enum_blue,
    enum_yellow
};
int main(int argc, char const *argv[])
{
    enum Color co = enum_red;
    printf("%d\n", (int)sizeof(co));
    int a = enum_red;
    printf("a=%d\n", a);
    printf("%d,%d,%d,%d,%d\n", enum_red, enum_black, enum_white, enum_blue, enum_yellow);
    printf("%d\n", enum_red == 0);
    printf("%d", (int)sizeof(enum Color));
    system("pause");
    return 0;
}

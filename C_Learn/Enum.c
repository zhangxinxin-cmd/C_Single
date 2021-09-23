/*
2021.9.23
枚举里面的值就是数字0，1，2，。。。。。。
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
enum Color
{
    enum_red,
    enum_black,
    enum_white,
    enum_blue,
    enum_yellow
};
int main(int argc, char const *argv[])
{
    printf("%d,%d,%d,%d,%d\n", enum_red, enum_black, enum_white, enum_blue, enum_yellow);
    printf("%d\n", enum_red == 0);
    system("pause");
    return 0;
}

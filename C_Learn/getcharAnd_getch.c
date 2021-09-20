/*
2021.9.19
getchar用法和_getcha用法
getchar()每次只能读取一个字符,可以读取空格字符和换行字符
getch()在控制台上输入的字符不会显示在控制台上。
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h> //getch()头文件
int main(void)
{
    char c;
    c = getchar();
    printf("c=%c", c);
    c = getchar();
    printf("c=%c", c);
    c = getchar();
    printf("c=%c", c);
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
        ;
    char a;
    a = getch();
    printf("a=%c", a);
    system("pause");
    return 0;
}
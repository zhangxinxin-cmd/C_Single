/*
字符串声明有四种形式：
1.有元素个数:
（1）char str[4]={'a','b','c','\0'};(注意别越界)
(2)char str[4];str[0]='a';str[1]='b';str[2]='c',str[3]='0';(这种形式一定要加'\0')
2.无元素个数:char str[]={'a','b','c','\0'};(这种形式一定要加'\0')
3.常量字符串：char *p="hello zhang";(常量字符串自带'\0',常量字符串不可修改，但是指针可以指向其他字符串)
4.char str[]="hello";(数组大小加不加都可以)
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    char *p = "hello zhang"; //p指针就相当于数组名
    printf("%s\n", p);
    p = "world";
    printf("%s\n", p);
    char str[] = "hello"; //系统会计算常量字符串hello\0的长度，然后在栈区申请相应大小的空间，将hello\0依次复制进栈区字符数组str中
    return 0;
}

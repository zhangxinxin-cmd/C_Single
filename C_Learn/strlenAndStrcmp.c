/*
strlen()计算字符串长度不算'\0',遇到'\0'就结束
sizeof()计算字符串长度是计算整个数组的长度
strcmp()从两个字符串的第一个字符开始比较(ASCII码),返回>0,<0,==0
strncmp(char*,char*,size_t) 从比较前n个字符
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char chs[7] = "hello";
    printf("sizeof(chs)=%d\n", sizeof(chs));
    printf("strlen(chs)=%d\n", strlen(chs));
    char chs2[5] = "her";
    printf("%d\n", strcmp(chs, chs2));
    printf("%d\n", strncmp(chs, chs2, 2));
    system("pause");
    return 0;
}

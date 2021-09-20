/*
2021.9.19
strncpy(char*,const char*,size_t);将第一个字符串前size_t个字符替换成第二个字符串前size_t个字符
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str[10] = "hello";
    char str1[4] = "wor";
    char *p = str1;
    strncpy(str, str1, 2);
    printf("%s\n", str);
    strncpy(str, p, 3);
    printf("%s", str);
    system("pause");
    return 0;
}

/*
2021.9.20
strcat(char* ,const char*);拼接字符串，注意拼接后的长度不要超过字符数组本身长度
strncat(char*,const char*,size_t);将B字符串前n个字符拼接到A字符串后面
atoi(char*);将字符串转成整型数字
itoa(int,char*,int)将指定整型数字按特定进制转成字符填入char中
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str[10] = "hello";
    printf("%s\n", str);
    strcat(str, "one");
    printf("%s\n", str);
    strcpy(str, "hello");
    strncat(str, "world", 4);
    printf("%s\n", str);
    int a = atoi("12345");
    if (a == 12345)
        printf("true\n");
    char chs[20] = {0};
    itoa(1234, chs, 10);
    printf("%s", chs);
    system("pause");
    return 0;
}

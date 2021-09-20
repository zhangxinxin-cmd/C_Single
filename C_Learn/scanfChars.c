/*
2021.9.19
scanf读取字符串不能读取空格字符
gets可以读取空格字符
scanf_s("%s",str,19) 19为20-1，给'\0'留一个字节
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    char str[20];
    scanf("%s\n", str); //str-->&str[0]
    printf("%s\n", str);
    printf("============\n");
    char str1[20];
    scanf("%s\n", str1);
    printf("%s\n", &str1[0]);
    printf("===========\n");
    system("pause");
    return 0;
}

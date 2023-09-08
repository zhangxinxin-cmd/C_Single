/*
2021.9.19
字符串，就是以'/0'结尾的字符数组，'/0'十进制形为0
初始化字符数组时，没有被赋值初始化的元素默认为'\0'，此时已经是字符串
数组的大小是包括'\0'的。
如果数组大小没有标明，则必须手动加'\0'
字符串的打印从给定地址开始，到'\0'前为止。
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    char chars[4] = {'a', 'b', 'c', '\0'};
    printf("%s\n", chars);
    puts(chars);
    system("pause");
    return 0;
}

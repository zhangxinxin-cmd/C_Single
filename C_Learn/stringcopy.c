/*2021.9.19
strcpy(char[] str1,char* str2) 将str1复制成str2，但是要注意str2的字符数要小于str数组的字符数
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str[6] = "hello";
    char *p = "world";
    printf("Before,str=%s\n", str);
    strcpy(str, p);
    printf("%s", str);
    system("pause");
    return 0;
}

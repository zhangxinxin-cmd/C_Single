/*
2021.9.20
sprintf(char*,const char*,format)将const char*内容以format格式填入char中
memcpy(char*,const char*,int )将B字符qiann个字符复制到A字符前n位中
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str[20];
    sprintf(str, "%d,%cabcd,%.3f", 12, 'w', 23.45345);
    printf("%s\n", str);
    char chs[10] = "hello";
    memcpy(chs, "nio", 2);
    puts(chs);
    system("pause");
    return 0;
}

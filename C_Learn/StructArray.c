/*
结构体数组的定义类似于一般数组的定义
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Teach
{
    char teaName[10];
    int age;
};

int main(int argc, char const *argv[])
{
    struct Teach teas[3] = {{"小包", 21}, {"小花", 22}, {"小苗", 24}};
    for (int i = 0; i < 3; i++)
    {
        printf("%s的年龄是%d岁\n", teas[i].teaName, teas[i].age);
    }
    teas[0] = (struct Teach){"小白", 25}; //赋值类似于结构体的赋值
    printf("%s的年龄是%d岁\n", teas[0].teaName, teas[0].age);
    system("pause");
    return 0;
}

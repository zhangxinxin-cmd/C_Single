/*
2021.9.22
结构体声明：
Struct 结构体名{
    。。。;
    。。。;
};(结尾记得加分号)
结构体变量的声明与定义
struct 结构体名 结构体变量名={。。。，。。。};
结构体成员赋值：
1.单个成员赋值
2.复合文字结构 stu7=(strcut stu){。。。，。。。};
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct STU
{
    char name[10];
    int age;
    float high;
} stu3, stu4, stu5;

int main(int argc, char const *argv[])
{
    struct STU stu1 = {"周子成", 20, 176.0f};
    struct STU stu2 = {"姚宇星", 20, 180.0f};
    struct STU *p = &stu1;
    printf("周子成的身高是%.1fcm\n", p->high);
    printf("%s的年龄是%d岁\n", stu2.name, stu2.age);
    strcpy(stu1.name, "李千");
    printf("%s的年龄是%d岁\n", stu1.name, stu1.age);
    stu5 = (struct STU){"李千", 20, 178.0f}; //复合赋值
    system("pause");
    return 0;
}

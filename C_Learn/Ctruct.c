#include <stdio.h>
#include <stdlib.h>
struct STU
{
    char name[10];
    int age;
    float high;
};

int main(int argc, char const *argv[])
{
    struct STU stu1 = {"周子成", 20, 176.0f};
    struct STU stu2 = {"姚宇星", 20, 180.0f};
    struct STU *p = &stu1;
    printf("周子成的身高是%.1fcm\n", p->high);
    printf("%s的年龄是%d岁\n", stu2.name, stu2.age);
    system("pause");
    return 0;
}

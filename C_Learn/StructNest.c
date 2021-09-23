/*
2021.9.23
结构体嵌套，结构体内成员可以是结构体变量。
结构体定义时，可以用嵌套{...,...}的形式来初始化，也可以用结构体变量名来初始化。
甚至可以将结构体声明直接放在结构体内部，但是不建议。
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Stu
{
    char name[10];
    int age;
};
struct Teach
{
    char teaName[10];
    struct Stu st;
    int teaAge;
};
int main(int argc, char const *argv[])
{
    struct Teach te = {"老包", {"小包", 18}, 28};
    struct Stu stu = {"BOb", 17};
    struct Teach te2 = {"包包", stu, 29};
    printf("%s,%d\n", te.st.name, te.st.age);
    printf("%s,%d\n", te2.st.name, te2.st.age);
    strcpy(stu.name, "玉溪"); //修改stu中的name不能改变te2中的st.name
    printf("%s,%d\n", te2.st.name, te2.st.age);
    strcpy(te2.st.name, "玉溪");
    printf("%s,%d\n", te2.st.name, te2.st.age);
    system("pause");
    return 0;
}
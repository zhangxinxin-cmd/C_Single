/*
2021.9.22
指针成员和函数成员,结构体中不能直接存在函数，但是可以放函数指针
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
void fun(void);
struct Stu
{
    int *p;
};
struct Stu2
{
    void (*p)(void);
};

int main(int argc, char const *argv[])
{
    // struct Stu st = {NULL};
    // st.p = (int *)malloc(8);
    int array[5] = {1, 2, 3, 4, 5};
    struct Stu st = {array};
    printf("%d,%d\n", st.p[0], st.p[1]);
    struct Stu2 st2 = {fun};
    st2.p();
    system("pause");
    return 0;
}
void fun(void)
{
    printf("I am fun.");
}

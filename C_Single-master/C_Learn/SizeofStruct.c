#include <stdio.h>
#include <stdlib.h>

struct Stu
{
    char c;
    short s;
    int i;
    double d;
};

int main(int argc, char const *argv[])
{
    printf("%d\n", (int)sizeof(struct Stu));
    printf("%d\n", (int)sizeof(double));
    printf("%d\n", (int)sizeof(int));
    system("pause");
    return 0;
}

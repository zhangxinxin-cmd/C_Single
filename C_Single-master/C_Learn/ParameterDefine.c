#include <stdio.h>
#include <stdlib.h>
#define PRINTF(x) printf("%d\n", x)
#define SUM(x, y) (x + y)
#define MUL(x, y) (x * y)
int main(int argc, char const *argv[])
{
    PRINTF(88);
    printf("%d\n", SUM(12, 23));
    printf("%d", MUL(12, 2));
    system("pause");
    return 0;
}

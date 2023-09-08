/* 
2021.9.24
define 就是将常量替换成别的称呼
 */
#include <stdio.h>
#include <stdlib.h>

#define ONE 1
#define TWO 1 + 2 * 3;
#define EXPRESSION 1 * 2 * 4
#define PRINTF printf("%d",
int main(int argc, char const *argv[])
{
    PRINTF EXPRESSION);
    system("pause");
    return 0;
}

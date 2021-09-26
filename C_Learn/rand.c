#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    //随机数种子
    srand((unsigned int)time(NULL));
    //产生随机数
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", rand());
    }
    system("pause");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *pFile = fopen("hello.txt", "a");
    char *str = "hello";
    size_t a = fwrite(str, sizeof(char), strlen(str) + 1, pFile);
    fclose(pFile);
    printf("%d", (int)a);
    system("pause");
    return 0;
}

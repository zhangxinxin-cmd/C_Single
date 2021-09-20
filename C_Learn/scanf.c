#include <stdio.h>
#include <stdlib.h>
/*2021.9.18
控制台的输入会在内存中开辟一块空间存储，当按下回车时，表示输入结束，此时scanf会在缓冲区读取数据，存入变量空间。
只要缓冲区还有数据，scanf就会继续读取数据，直到\n前为止，但注意此时缓冲区内还存在\n这个数据
当输入多个字符变量时，不能加分隔符。
*/
int main(int argc, char const *argv[])
{
    // int a, b, c;
    // scanf("%d%d%d", &a, &b, &c);
    // printf("a=%db=%dc=%d\n", a, b, c);
    // int d;
    // printf("请输入d\n");
    // scanf("%d", &d); //因为这里的scanf读取的是整型，所以\n不会被读取
    // printf("%d", d);
    // char ch;
    // scanf("%c", &ch);
    // printf("ch=%d", ch);
    printf("--------------");
    char e;
    printf("请输入c:");
    scanf("%c", &e);
    printf("c=%c", e);
    while ((e = getchar()) != '\n' && e != EOF)
        ;
    scanf("%c", &e);
    printf("c=%c", e);
    while ((e = getchar()) != '\n' && e != EOF)
        ;
    int f, g;
    scanf("%d", &f);
    scanf("%d", &g); //空格和换行字符对scanf读取整型没有影响
    printf("f=%d", f);
    printf("g=%d", g);
    system("pause");
    return 0;
}

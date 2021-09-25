#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    double a = 12.0;
    int *p = (int *)(&a);
    char *m = (char *)(&a);
    double *q = &a;
    printf("%p,%p\n", p, p + 1);
    printf("%p\n", q);
    printf("%d,%d,%d,%d,%d,%d,%d,%d\n", *m, *(m + 1), *(m + 2), *(m + 3), *(m + 4), *(m + 5), *(m + 6), *(m + 7));
    short *n = (short *)(&a);
    printf("%d\n", *(n + 3));
    printf("%d\n", *(p + 1));
    *p = 23;
    *(p + 1) = 22;
    printf("%d,%d\n", *p, *(p + 1));
    printf("%f\n", a);
    printf("==============\n");
    int b = -15;
    char *w = (char *)(&b);
    printf("%d,%d,%d,%d", *w, *(w + 1), *(w + 2), *(w + 3));
    system("pause");
    return 0;
}

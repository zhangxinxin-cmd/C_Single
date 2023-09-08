#include<stdio.h>
#include<stdlib.h>
double fun(int i){
volatile double d[1]={3.14};
volatile long int a[2];
a[i]=1073741824;
return d[0];
}
int main(){
    printf("%f",fun(4));
    system("pause");
    return 0;
}
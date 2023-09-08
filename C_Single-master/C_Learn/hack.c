#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void outputs(char* str){
    char buffer[16];
    strcpy(buffer,str);
    printf("%s\n",buffer);
}
void hacker(){
    printf("being hacked\n");
}
int main(int argc, char const *argv[])
{
    outputs(argv[1]);
    return 0;
}

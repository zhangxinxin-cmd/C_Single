
/*
2021.9.24
typedf简而言之就是用于将一个变量类型用我们自己定义的类型来代替。
*/
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>
typedef struct Node
{
    int data;
    struct Node *PNEXT;
} NODE; //NODE==struct Node
NODE *creat_list(void);
void add(int, NODE *);
void show_list(NODE *);
bool delete_list(int, NODE *);
typedef int myInt;
typedef myInt yourInt;
typedef unsigned int uint;

int main(int argc, char const *argv[])
{

    myInt a = 3;
    uint b = 5;
    yourInt c = 6;
    NODE *PHead = creat_list();
    add(4, PHead);
    add(6, PHead);
    add(8, PHead);
    add(12, PHead);
    show_list(PHead);
    bool result = delete_list(8, PHead);
    printf("%d", result);
    system("pause");
    return 0;
}

NODE *creat_list(void)
{
    NODE *PHead = (NODE *)malloc(sizeof(NODE));
    if (PHead == NULL)
    {
        printf("分配内存失败");
        exit(-1);
    }
    PHead->data = 0;
    PHead->PNEXT = NULL;
    return PHead;
}
void add(int value, NODE *PHead)
{
    NODE *PNewNode = (NODE *)malloc(sizeof(NODE));
    if (PNewNode == NULL)
    {
        printf("分配内存失败");
        exit(-1);
    }
    NODE *temp = PHead;
    while (temp->PNEXT != NULL)
    {
        temp = temp->PNEXT;
    }
    temp->PNEXT = PNewNode;
    PNewNode->data = value;
    PNewNode->PNEXT = NULL;
}
void show_list(NODE *PHead)
{
    NODE *temp = PHead->PNEXT;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->PNEXT;
    }
    printf("\n");
}
bool delete_list(int value, NODE *PHead)
{
    NODE *temp = PHead;
    while (temp->PNEXT != NULL && temp->PNEXT->data != value)
    {
        temp = temp->PNEXT;
    }
    if (temp == NULL)
    {
        printf("在链表中未找到%d", value);
        return false;
    }
    else
    {
        NODE *q = temp->PNEXT;
        temp->PNEXT = q->PNEXT;
        free(q);
        return true;
    }
}
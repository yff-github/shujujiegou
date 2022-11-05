#include"shunxubiao.h"
#include"lianbiao.h"
#include <iostream>
#include"lianbiao.cpp"
#include"shu.h"





void shunxubiao1() {
    Sqlist l;
    InitSqlist(l);
    for (int i = 0; i < 10; i++)
    {
        l.data[i] = rand() % 50;
        l.lenght = i + 1;
    }
    printList(l);
    p18_6(l);
    printList(l);
}
//void lianbiao() {
//    LinkList l;
//    HeadInstert(l);
//    print(l);
//    
//}
//typedef struct LinkList
//{
//    struct LNode* front, * rear;
//}*LinkList, LinkList;
//
//typedef struct LNode
//{
//    ElemType data;
//    struct LNode* next;
//}*LNode, LNode;

//void lianbiao() {
//    LinkList l;
//    HeadInstert(l);
//    print(l);
//    
//}
//typedef struct LinkList
//{
//    struct LNode* front, * rear;
//}*LinkList, LinkList;
//
//typedef struct LNode
//{
//    ElemType data;
//    struct LNode* next;
//}*LNode, LNode;


//void HeadInstert(LinkList& l)
//{
//    int nums;
//    LNode* s = (LNode*)malloc(sizeof(LNode));
//    l->front = s;
//    std::cin >> nums;
//    while (nums != 9999)
//    {
//
//    }
//    l->rear = s;
//}




int main()
{
    //BitTree a;
    /*
    int b[10];
    for (int i = 0; i < 10; i++)
        b[i] = i;
   creatBinTree(a);
    a = NULL;
    To_Tree(a, b, 0, 9);
   // LevelOrder(a);
    //InOrder(a);
   // PostOrder_1_1(a);
    int s = Btdepth_1(a);
    */
    int a[12] = { 0,1,2,3,4,5,6,7,8,9,10,11 };
    int b[12] = { 0,4,3,5,2,7,6,8,1,10,9,11 };
    BitTree t=BuildTree(a, b, 1, 11, 1, 11);
    PostOrder(t);
    printf("\n");
    int s=Iscompleate(t);
    printf("%d", s);

//void HeadInstert(LinkList& l)
//{
//    int nums;
//    LNode* s = (LNode*)malloc(sizeof(LNode));
//    l->front = s;
//    std::cin >> nums;
//    while (nums != 9999)
//    {
//
//    }
//    l->rear = s;
//}
    


}


int main()
{
    BitTree a;
    int b[10];
    for (int i = 0; i < 10; i++)
        b[i] = i;
  /*  creatBinTree(a);*/
    a = NULL;
    To_Tree(a, b, 0, 9);
   // LevelOrder(a);
    //InOrder(a);
    ProOrder(a);
    printf("\n");
    ProOrder_1(a);
}



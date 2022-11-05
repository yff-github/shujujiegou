#pragma once
#include<stdio.h>
#include<iostream>
#include<queue>
#include<stack>
#define ElemType int
using std::queue;
using std::stack;

typedef struct BitNode
{
	ElemType data;
	bool ltag, rtag;
	BitNode* lchild;
	BitNode* rchild;
}BitNode,*BitTree;

//��������
void visit(BitTree p);
//�������
void ProOrder(BitTree p);
//�������
void InOrder(BitTree p);
//�������
void PostOrder(BitTree p);
//�ǵݹ��������
void ProOrder_1(BitTree p);
//��α���
void LevelOrder(BitTree p);


bool creatBinTree(BitTree& BT);
void To_Tree(BitTree& t, int a[], int begin, int end);
void PostOrder_1_1(BitTree p);
//�ǵݹ���������
int Btdepth(BitTree t);
//�ݹ���������
int Btdepth_1(BitTree t);
//ǰ��a[]����b[]����
BitTree BuildTree(int a[], int b[], int a1, int a2, int b1, int b2);
//�ж��Ƿ���ȫ������
bool Iscompleate(BitTree t);

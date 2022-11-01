#pragma once
#include<stdio.h>
#include<iostream>
#include<queue>
#define ElemType int
using std::queue;

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



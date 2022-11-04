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

//遍历操作
void visit(BitTree p);
//先序遍历
void ProOrder(BitTree p);
//中序遍历
void InOrder(BitTree p);
//后序遍历
void PostOrder(BitTree p);
//非递归先序遍历
void ProOrder_1(BitTree p);
//层次遍历
void LevelOrder(BitTree p);


bool creatBinTree(BitTree& BT);
void To_Tree(BitTree& t, int a[], int begin, int end);
void PostOrder_1(BitTree p);
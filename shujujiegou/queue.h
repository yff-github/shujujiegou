#pragma once
#include<stdio.h>
#include<malloc.h>
#define ElemType int

//队列节点
typedef struct LinkNode {
	ElemType data;
	LinkNode* next;
}LinkNode;
//链式队列
typedef struct {
	LinkNode* front, * rear;
}Queue;

//初始化
void InitQueue(Queue& q);
//入队
void EnQueue(Queue& q, ElemType x);
//出队
bool DeQueue(Queue& q, ElemType& x);
//判空
bool EmptyQueue(Queue q);
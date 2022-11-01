#pragma once
#include<stdio.h>
#include<malloc.h>
#define ElemType int

//���нڵ�
typedef struct LinkNode {
	ElemType data;
	LinkNode* next;
}LinkNode;
//��ʽ����
typedef struct {
	LinkNode* front, * rear;
}Queue;

//��ʼ��
void InitQueue(Queue& q);
//���
void EnQueue(Queue& q, ElemType x);
//����
bool DeQueue(Queue& q, ElemType& x);
//�п�
bool EmptyQueue(Queue q);
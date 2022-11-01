#include"queue.h"

void InitQueue(Queue& q)
{
	q.front = q.rear = (LinkNode*)malloc(sizeof(LinkNode));
	q.front->next = NULL;
}
void EnQueue(Queue& q, ElemType x)
{
	LinkNode* p = (LinkNode*)malloc(sizeof(LinkNode));
	p->data = x;
	p->next = NULL;
	q.rear->next = p;
	q.rear = p;
}
bool EmptyQueue(Queue q)
{
	return q.front == q.rear ? true : false;
}
bool DeQueue(Queue& q,ElemType& x)
{
	if (EmptyQueue(q))
		return false;
	LinkNode* p = q.front->next;
	x = p->data;
	q.front->next = p->next;
	if (q.rear == p)
		q.rear = q.front;
	free(p);
	return 1;
}

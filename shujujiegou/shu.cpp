#include"shu.h"

void visit(BitTree p)
{
	printf("%d", p->data);
}

void ProOrder(BitTree p)
{
	if (p != NULL)
	{
		visit(p);
		ProOrder(p->lchild);
		ProOrder(p->rchild);
	}
}
void InOrder(BitTree p)
{
	if (p != NULL)
	{
		InOrder(p->lchild);
		visit(p);
		InOrder(p->rchild);
	}
}
void PostOrder(BitTree p)
{
	if (p != NULL)
	{
		PostOrder(p->lchild);
		PostOrder(p->rchild);
		visit(p);
	}
}
void LevelOrder(BitTree p)
{
	queue<BitTree> q;
	BitTree a = p;
	q.push(a);
	while (q.empty())
	{
		a = q.front();
		q.pop();
		visit(a);
		if(a->lchild!=NULL)
		q.push(a->lchild);
		if(a->rchild!=NULL)
		q.push(a->rchild);
	}

}


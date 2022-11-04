#include"shu.h"

void visit(BitTree p)
{
	printf("%d", p->data);
}

bool creatBinTree(BitTree& BT)
{
	printf("请输入当前节点数据\n");
	char ch;
	scanf(" %c", &ch);
	if (ch == '*')
		BT = NULL;
	else
	{
		BT = (BitTree)malloc(sizeof(BitNode));
		BT->data = ch - '0';
		creatBinTree(BT->lchild);
		creatBinTree(BT->rchild);
	}
	return true;
}


//void buildtree(bittree &t, int a[], int begin, int end)
//{
//	if (begin > end)
//		return;
//	int mid = (begin + end) / 2;
//	if (bittree == null)
//	{
//		bittree = (node*)malloc(sizeof(node));
//		bittree->data = a[mid];
//		bittree->left = null;
//		bittree->right = null;
//	}
//	buildtree(bittree->, a, begin, mid - 1);
//	buildtree(bittree->right, a, mid + 1, end);
//}

void To_Tree(BitTree&t, int a[], int begin, int end)
{
	if (begin > end)
		return;
	int mid = (begin + end) / 2;
	if (t == NULL)
	{
		t = (BitNode*)malloc(sizeof(BitNode));
		t->data = a[mid];
		t->lchild = NULL;
		t->rchild = NULL;
	}
	To_Tree(t->lchild, a, begin, mid - 1);
	To_Tree(t->rchild, a, mid + 1, end);
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
	while (!q.empty())
	{
		a = q.front();
		q.pop();
		visit(a);
		if(a->lchild!=NULL)
		q.push(a->lchild);
		if(a->rchild!=NULL)
		q.push(a->rchild);
		printf("\n");
	}

}

void PostOrder_1(BitTree p)
{
	stack<BitTree> s;
	BitTree r = NULL;
	while (p||s.empty())
	{
		if (p)
		{
			s.push(p);
			p = p->lchild;
		}
		else
		{
			p = s.top();
			if (p->lchild && p->rchild != r)
			{
				p = p->rchild;
			}
			else {
				s.pop();
				visit(p);
				r = p;
				p = NULL;
			}
		

		}

	}
}



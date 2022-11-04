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


void PostOrder_1_1(BitTree p)
{
	stack<BitTree> s;
	BitTree r = NULL;
	while (p || !s.empty())
	{
		if (p)
		{
			s.push(p);
			p = p->lchild;
		}
		else
		{
			p = s.top();
			if (p->lchild&&p->rchild != r)
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


int Btdepth(BitTree t)
{
	int front = -1, rear = -1;
	int last = 0, level = 0;
	BitTree q[10];
	q[++rear] = t;
	BitTree p;
	while (rear > front)
	{
		p = q[++front];
		if (p->lchild)
			q[++rear]=p->lchild;
		if (p->rchild)
			q[++rear] = p->rchild;
		if (front == last)
		{
			level++;
			last = rear;
		}

	}
	return level;
}

int Btdepth_1(BitTree t)
{
	if (!t)
		return 0;
	int l = Btdepth_1(t->lchild);
	int r = Btdepth_1(t->rchild);
	if (l > r)
		return l + 1;
	else
		return r + 1;
}

BitTree BuildTree(int a[], int b[], int a1, int a2, int b1, int b2)
{
	BitTree root = (BitTree)malloc(sizeof(BitNode));
	root->data = a[a1];
	int  i = 0;
	for (i = b1; b[i] != root->data; i++);
	int llen = i - b1;
	int rlen = b2 - i;
	if (llen>0)
	{
		root->lchild = BuildTree(a, b, a1 + 1, a1 + llen, b1, b1 + llen - 1);
	}
	else
		root->lchild = NULL;
	if (rlen>0)
		root->rchild = BuildTree(a, b, a2 - rlen + 1, a2, b2= b2- rlen + 1, b2);
	else
		root->rchild = NULL;
	return root;
}


bool Iscompleate(BitTree t)
{
	queue<BitTree> q;
	if (t)
		return t;
	q.push(t);
	BitTree p;
	while (!q.empty())
	{
		p = q.front();
		q.pop();
		if (p)
		{
			q.push(p->lchild);
			q.push(p->rchild);
		}
		else
		{
			while (!q.empty())
			{
				q.pop();
				if (p)
					return 0;

			}
		}
	}
	return 1;
}



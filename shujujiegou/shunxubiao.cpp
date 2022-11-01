#include"shunxubiao.h"




void p18_6(Sqlist& l)
{
	for (int i = 1; i < l.lenght; i++)
	{
		for (int j = 0; j < i; j++)
			if (l.data[i] == l.data[j])
			{
				ListDetele(l, i);
				i--;
			}
	}
}

bool p18_4(Sqlist& l, int max, int min)
{
	if (Empty(l))
		return 0;
	int t = 0;
	for (int i = 0; i < l.lenght; i++)
	{
		if (l.data[i] > min && l.data[i] < max)
		{
			ListDetele(l, i);
			i--;
		}
	}
	return true;
}
void p18_3(Sqlist& l, int s)
{
	for (int i = 0; i < l.lenght; i++)
	{
		if (s == l.data[i])
			ListDetele(l, i);
	}
}
void p18_2(Sqlist& l)
{
	int temp;
	for (int i = 0; i < l.lenght / 2; i++)
	{
		temp = l.data[i];
		l.data[i] = l.data[l.lenght - i-1];
		l.data[l.lenght - i-1] = temp;
	}
}
int p18_1(Sqlist& l)
{
	if (Empty(l))
	{
		return false;
		printf("顺序表为空！");
	}
	int min=l.data[1],i;
	for (i = 1; i < l.lenght; i++)
	{
		if (min>l.data[i])
			min = l.data[i];
	}
	return ListDetele(l, LocateElem(l,min));

}


int ListDetele(Sqlist& l, int i)
{
	if (Empty(l))
		return -1;
	int nums = l.data[i];
	for (int j = i; j < l.lenght-1; j++)
	{
		l.data[j] = l.data[j+1];
	}
	l.lenght--;
	return nums;
}
bool printList(Sqlist l)
{
	if (Empty(l))
		return false;
	printf("顺序表有%d个元素：", l.lenght);
	for (int i = 0; i < l.lenght; i++)
	{
		printf("%d  ", l.data[i]);
	}
	printf(" \n");
	return true;
}

void InitSqlist(Sqlist& l)
{
	for (int i = 0; i < MaxSize; i++)
	{
		l.data[i] = 0;
	}
	l.lenght = 0;
}

void InitSeqlist(Seqlist& l)
{
	
	l.Maxlong = MaxSize;
	l.lenght = 0;
	l.data = (ElemType*)malloc(sizeof(ElemType) * l.Maxlong);
}

bool IncreaeseSize(Seqlist& l, int len)
{
	ElemType* p;
	p = (ElemType*)malloc((l.Maxlong + len) * sizeof(ElemType));
	if (p == NULL)
		return false;
	l.Maxlong += len;
	for (int i = 0; i < l.Maxlong-1; i++)
	{
		p[i] = l.data[i];
	}
	l.data = p;
	free(p);
	return true;
}

int Lenght(Sqlist l)
{
	return l.lenght;
}
int Lenght(Seqlist l)
{
	return l.lenght;
}
bool Empty(Sqlist l)
{
	return l.lenght == 0 ? 1 : 0;
}
bool Empty(Seqlist l)
{
	return l.lenght == 0 ? 1 : 0;
}

ElemType GetElem(Sqlist& l, int e)
{
	return l.data[e - 1];
}
ElemType GetElem(Seqlist& l, int e)
{
	return l.data[e - 1];
}
int LocateElem(Seqlist& l, int e)
{
	if (Empty(l))
		return -1;
	for (int i = 0; i < l.lenght; i++)
	{
		if (e == l.data[i])
			return i;
	}
	return -1;
}
int LocateElem(Sqlist& l, int e)
{
	if (Empty(l))
		return -1;
	for (int i = 0; i < l.lenght; i++)
	{
		if (e == l.data[i])
			return i;
	}
	return -1;
}

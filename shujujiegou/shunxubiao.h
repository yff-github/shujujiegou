#pragma once
#include<stdio.h>
#include<malloc.h>
#define ElemType int
#define MaxSize 10


typedef struct {
	ElemType data[MaxSize];
	int lenght;
}Sqlist;      //静态顺序表

typedef struct {
	ElemType* data;
	int Maxlong;
	int lenght;
}Seqlist;		//动态顺序表





//顺序表操作

void InitSqlist(Sqlist& l);  //初始化静态顺序表
void InitSeqlist(Seqlist& l);  //初始化动态顺序表
bool IncreaeseSize(Seqlist& l, int len);  //增加动态顺序表结构
int Lenght(Sqlist l);				//求长
int Lenght(Seqlist l);				//求长
bool Empty(Sqlist l);				//判空
bool Empty(Seqlist l);
ElemType GetElem(Sqlist& l, int e);
ElemType GetElem(Seqlist& l, int e);			//按位查找
int LocateElem(Sqlist& l, int e);
int LocateElem(Seqlist& l, int e);				//按值查找
int ListDetele(Sqlist& l, int i);				//按位删除
bool printList(Sqlist l);						//顺序输出顺序表

int p18_1(Sqlist& l);
void p18_2(Sqlist& l);
void p18_3(Sqlist& l, int s);
bool p18_4(Sqlist& l, int max, int min);
void p18_6(Sqlist& l);












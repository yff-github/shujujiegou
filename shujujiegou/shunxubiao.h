#pragma once
#include<stdio.h>
#include<malloc.h>
#define ElemType int
#define MaxSize 10


typedef struct {
	ElemType data[MaxSize];
	int lenght;
}Sqlist;      //��̬˳���

typedef struct {
	ElemType* data;
	int Maxlong;
	int lenght;
}Seqlist;		//��̬˳���





//˳������

void InitSqlist(Sqlist& l);  //��ʼ����̬˳���
void InitSeqlist(Seqlist& l);  //��ʼ����̬˳���
bool IncreaeseSize(Seqlist& l, int len);  //���Ӷ�̬˳���ṹ
int Lenght(Sqlist l);				//��
int Lenght(Seqlist l);				//��
bool Empty(Sqlist l);				//�п�
bool Empty(Seqlist l);
ElemType GetElem(Sqlist& l, int e);
ElemType GetElem(Seqlist& l, int e);			//��λ����
int LocateElem(Sqlist& l, int e);
int LocateElem(Seqlist& l, int e);				//��ֵ����
int ListDetele(Sqlist& l, int i);				//��λɾ��
bool printList(Sqlist l);						//˳�����˳���

int p18_1(Sqlist& l);
void p18_2(Sqlist& l);
void p18_3(Sqlist& l, int s);
bool p18_4(Sqlist& l, int max, int min);
void p18_6(Sqlist& l);












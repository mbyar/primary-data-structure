#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
#define  MAXSIZE 10
typedef int Status;
typedef struct
{
	int r[MAXSIZE + 1];
	int length;
}SqList;
void swap(SqList* L, int i, int j)
{
	int temp = L->r[i];
	L->r[i] = L->r[j];
	L->r[j] = temp;
}
void InsertSort(SqList* L)
{
	int i, j;
	for (i = 2; i <= L->length; i++)
	{
		if (L->r[i] < L->r[i - 1])
		{
			L->r[0] = L->r[i];
			for (j = i - 1; L->r[j] > L->r[0]; j--)
				L->r[j + 1] = L->r[j];
			L->r[j + 1] = L->r[0];
		}
	}
}
int main()
{

	return 0;
}
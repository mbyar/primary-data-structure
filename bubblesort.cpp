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
//∂‘À≥–Ú±ÌL◊˜Ωªªª≈≈–Ú(√∞≈›≈≈–Ú≥ıº∂∞Ê)
void BubbleSort0(SqList* L)
{
	int i, j;
	for (i = 1; i < L->length; i++)
	{
		for (j = i + 1; j <= L->length; j++)
		{
			if (L->r[i] > L->r[j])
			{
				swap(L, i, j);
			}
		}
	}
}
void BubbleSort(SqList* L)
{
	int i, j;
	for (i = 1; i < L->length; i++)
	{
		for (j = L->length - 1; j >= i; j--)
		{
			if (L->r[j] > L->r[j + 1])
			{
				swap(L, j, j + 1);
			}
		}
	}
}
void BubbleSort2(SqList* L)
{
	int i, j;
	Status flag = TRUE;
	for (i = 1; i < L->length && flag; i++)
	{
		flag = FALSE;
		for (j = L->length - 1; j >= i; j--)
		{
			if (L->r[j] > L->r[j + 1])
			{
				swap(L, j, j + 1);
				flag = TRUE;
			}
		}
	}
}
int main()
{

	return 0;
}
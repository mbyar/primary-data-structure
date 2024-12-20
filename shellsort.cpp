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
void ShellSort(SqList* L)
{
	int i, j;
	int increment = L->length;
	do
	{
		increment = increment / 3 + 1;
		for (i = increment + 1; i <= L->length; i++)
		{
			if (L->r[i] < L->r[i - increment])
			{
				L->r[0] = L->r[i];
				for (j = i - increment; j > 0 && L->r[0] < L->r[j]; j -= increment)
					L->r[j + increment] = L->r[j];
				L->r[j + increment] = L->r[0];
			}
		}
	} while (increment > 1);
}
int main()
{

	return 0;
}
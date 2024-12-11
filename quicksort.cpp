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
int Partition(SqList* L, int low, int high)
{
	int pivotkey;
	int m = low + (high - low) / 2;
	if (L->r[low] > L->r[high])
		swap(L, low, high);
	if (L->r[m] > L->r[high])
		swap(L, high, m);
	if (L->r[m] > L->r[low])
		swap(L, m, low);
	pivotkey = L->r[low];
	L->r[0] = pivotkey;
	while (low < high)
	{
		while (low < high && L->r[high] >= pivotkey)
			high--;
		L->r[low] = L->r[high];
		while (low < high && L->r[low] <= pivotkey)
			low++;
		L->r[high] = L->r[low];
	}
	L->r[low] = L->r[0];
	return low;
}
void QSort(SqList* L, int low, int high)
{
	int pivot;
	if (low < high)
	{
		pivot = Partition(L, low, high);
		QSort(L, low, pivot - 1);
		QSort(L, pivot + 1, high);
	}
}
void QuickSort(SqList* L)
{
	QSort(L, 1, L->length);
}
void QSort1(SqList* L, int low, int high)
{
	int pivot;
	while (low < high)
	{
		pivot = Partition(L, low, high);
		QSort1(L, low, pivot - 1);
		low = pivot + 1;
	}
}
int main()
{

	return 0;
}
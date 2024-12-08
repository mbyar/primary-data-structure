#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define MAXVEX 50
#define ERROR 0
#define OK 1
typedef struct EdgeNode
{
	int adjvex;
	int weight;
	struct EdgeNode* next;
}EdgeNode;
typedef struct VertexNode
{
	int in;
	int data;
	EdgeNode* firstedge;
}VertexNode, AdjList[MAXVEX];
typedef struct
{
	AdjList adjList;
	int numVertexes, numEdges;
}graphAdjList, * GraphAdjList;
typedef int Status;
int* etv, * ltv;
int* stack2;
int top2;
Status TopologicalSort(GraphAdjList GL)
{
	EdgeNode* e;
	int i, k, gettop;
	int top = 0;
	int count = 0;
	int* stack;
	stack = (int*)malloc(GL->numVertexes * sizeof(int));
	for (i = 0; i < GL->numVertexes; i++)
		if (GL->adjList[i].in == 0)
			stack[++top] = i;
	top2 = 0;
	etv = (int*)malloc(GL->numVertexes * sizeof(int));
	for (i = 0; i < GL->numVertexes; i++)
		etv[i] = 0;
	stack2 = (int*)malloc(GL->numVertexes * sizeof(int));
	while (top != 0)
	{
		gettop = stack[top--];
		printf("%d -> ", GL->adjList[gettop].data);
		count++;
		stack2[++top2] = gettop;
		for (e = GL->adjList[gettop].firstedge; e; e = e->next)
		{
			k = e->adjvex;
			if (!(--GL->adjList[k].in))
				stack[++top] = k;
			if ((etv[gettop] + e->weight) > etv[k])
				etv[k] = etv[gettop] + e->weight;
		}
	}
	if (count < GL->numVertexes)
		return ERROR;
	else
		return OK;
}
void CriticalPath(GraphAdjList GL)
{
	EdgeNode* e;
	int i, gettop, k, j;
	int ete, lte;
	TopologicalSort(GL);
	ltv = (int*)malloc(GL->numVertexes * sizeof(int));
	for (i = 0; i < GL->numVertexes; i++)
		ltv[i] = etv[GL->numVertexes - 1];
	while (top2 != 0)
	{
		gettop = stack2[top2--];
		for (e = GL->adjList[gettop].firstedge; e; e = e->next)
		{
			k = e->adjvex;
			if (ltv[k] - e->weight < ltv[gettop])
				ltv[gettop] = ltv[k] - e->weight;
		}
	}
	for (j = 0; j < GL->numVertexes; j++)
	{
		for (e = GL->adjList[j].firstedge; e; e = e->next)
		{
			k = e->adjvex;
			ete = etv[j];
			lte = ltv[k] - e->weight;
			if (ete == lte)
				printf("<v%d,v%d> length: %d , ", GL->adjList[j].data, GL->adjList[k].data, e->weight);
		}
	}
}
int main()
{

	return 0;
}
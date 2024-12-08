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
	while (top != 0)
	{
		gettop = stack[top--];
		printf("%d -> ", GL->adjList[gettop].data);
		count++;
		for (e = GL->adjList[gettop].firstedge; e; e = e->next)
		{
			k = e->adjvex;
			if (!(--GL->adjList[k].in))
				stack[++top] = k;
		}
	}
	if (count < GL->numVertexes)
		return ERROR;
	else
		return OK;
}
int main()
{

	return 0;
}
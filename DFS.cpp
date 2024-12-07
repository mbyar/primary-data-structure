#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef char VertexType;
typedef int EdgeType;
#define MAXVEX 100
#define MAX 10
#define INFINITY 65535
#define TRUE 1
#define FALSE 0
typedef int Boolean;
Boolean visited[MAX];
typedef struct EdgeNode
{
	int adjvex;
	EdgeType weight;
	struct EdgeNode* next;
}EdgeNode;
typedef struct VertexNode
{
	VertexType data;
	EdgeNode* firstedge;
}VertexNode, AdjList[MAXVEX];
typedef struct
{
	AdjList adjList;
	int numVertexes, numEdges;
}GraphAdjList;
void DFS(GraphAdjList GL, int i)
{
	EdgeNode* p;
	visited[i] = TRUE;
	printf("%c", GL.adjList[i].data);
	p = GL.adjList[i].firstedge;
	while (p)
	{
		if (!visited[p->adjvex])
			DFS(GL, p->adjvex);
		p = p->next;
	}
}
void DFSTraverse(GraphAdjList GL)
{
	int i;
	for (i = 0; i < GL.numVertexes; i++)
		visited[i] = FALSE;
	for (i = 0; i < GL.numVertexes; i++)
		if (!visited[i])
			DFS(GL, i);
}
int main()
{
	
	return 0;
}
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
typedef struct
{

}Queue;
void InitQueue(Queue* Q)
{

}
void EnQueue(Queue* Q, int i)
{

}
int QueueEmpty(Queue Q)
{
	return 1;
}
void DeQueue(Queue* Q, int* i)
{

}
void BFSTraverse(GraphAdjList GL)
{
	int i;
	EdgeNode* p;
	Queue Q;
	for (i = 0; i < GL.numVertexes; i++)
		visited[i] = FALSE;
	InitQueue(&Q);
	for (i = 0; i < GL.numVertexes; i++)
	{
		if (!visited[i])
		{
			visited[i] = TRUE;
			printf("%c", GL.adjList[i].data);
			EnQueue(&Q, i);
			while (!QueueEmpty(Q))
			{
				DeQueue(&Q, &i);
				p = GL.adjList[i].firstedge;
				while (p)
				{
					if (!visited[p->adjvex])
					{
						visited[p->adjvex] = TRUE;
						printf("%c", GL.adjList[p->adjvex].data);
						EnQueue(&Q, p->adjvex);
					}
					p = p->next;
				}
			}
		}
	}
}
int main()
{
	
	return 0;
}
#include"graph.h"
void CreateALGraph(GraphAdjList* G)
{
	int i, j, k;
	EdgeNode* e;
	printf("���붥�����ͱ�����\n");
	scanf("%d,%d", &G->numVertexes, &G->numEdges);
	for (i = 0; i < G->numVertexes; i++)
	{
		scanf(&G->adjList[i].data);
		G->adjList[i].firstedge = NULL;
	}
	for (k = 0; k < G->numEdges; k++)
	{
		printf("�����(vi,vj)�ϵĶ�����ţ�\n");
		scanf("%d,%d", &i, &j);
		e = (EdgeNode*)malloc(sizeof(EdgeNode));
		e->adjvex = j;
		e->next = G->adjList[i].firstedge;
		G->adjList[i].firstedge = e;
		e = (EdgeNode*)malloc(sizeof(EdgeNode));
		e->adjvex = i;
		e->next = G->adjList[j].firstedge;
		G->adjList[j].firstedge = e;
	}
}
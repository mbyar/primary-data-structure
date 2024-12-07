#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef char VertexType;
typedef int EdgeType;
#define MAXVEX 100
#define INFINITY 65535
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
}VertexNode,AdjList[MAXVEX];
typedef struct
{
	AdjList adjList;
	int numVertexes, numEdges;
}GraphAdjList;
void CreateALGraph(GraphAdjList* G);
//CreateGraph(*G,V,VR)
//DestroyGraph(*G)
//LocateVex(G,u)
//GetVex(G,v)
//PutVex(G,v,value)
//FirstAdjVex(G,*v)
//NextAdjVex(G,v,*w)
//InsertVex(*G,v)
//DeleteVex(*G,v)
//InsertArc(*G,v,w)
//DeleteArc(*G,v,w)
//DFSTraverse(G)
//HFSTraverse(G)
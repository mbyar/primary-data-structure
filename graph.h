#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef char VertexType;
typedef int EdgeType;
#define MAXVEX 100
#define INFINITY 65535
typedef struct
{
	VertexType vexs[MAXVEX];
	EdgeType arc[MAXVEX][MAXVEX];
	int numVertexes, numEdges;
}MGraph;
void CreateMGraph(MGraph* G);
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
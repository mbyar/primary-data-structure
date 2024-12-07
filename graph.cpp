#include"graph.h"
void CreateMGraph(MGraph* G)
{
	int i, j, k, w;
	printf("输入顶点数和边数：\n");
	scanf("%d,%d", &G->numVertexes, &G->numEdges);
	for (i = 0; i < G->numVertexes; i++)
		scanf(&G->vexs[i]);
	for (i = 0; i < G->numVertexes; i++)
		for (j = 0; j < G->numVertexes; j++)
			if (i == j)
				G->arc[i][j] == 0;
			else
				G->arc[i][j] = INFINITY;
	for (k = 0; k < G->numEdges; k++)
	{
		printf("输入边(vi,vj)上的下标i,下标j和权w：\n");
		scanf("%d %d %d", &i, &j, &w);
		G->arc[i][j] = w;
		G->arc[j][i] = G->arc[i][j];
	}
}
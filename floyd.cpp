//typedef int Pathmatirx[MAXVEX][MAXVEX];
//typedef int ShortPathTable[MAXVEX][MAXVEX];
//void ShortestPath_Floyd(MGraph G, Pathmatirx* P, ShortPathTable* D)
//{
//	int v, w, k;
//	for (v = 0; v < G.numVertexes; ++v)
//	{
//		for (w = 0; w < G.numVertexes; ++w)
//		{
//			(*D)[v][w] = G.matirx[v][w];
//			(*P)[v][w] = w;
//		}
//	}
//	for (k = 0; k < G.numVertexes; ++k)
//	{
//		for (v = 0; v < G.numVertexes; ++v)
//		{
//			for (w = 0; w < G.numVertexes; ++w)
//			{
//				if ((*D)[v][w] > (*D)[v][k] + (*D)[k][w])
//				{
//					(*D)[v][w] = (*D)[v][k] + (*D)[k][w];
//					(*P)[v][w] = (*P)[v][k];
//				}
//			}
//		}
//	}
//}
//void show_path(MGraph G, Pathmatirx* P, ShortPathTable* D)
//{
//	int v,w,k;
//	for (v = 0; v < G.numVertexes; ++v)
//	{
//		for (w = v + 1; w < G.numVertexes; w++)
//		{
//			printf("v%d-v%d weight: %d ", v, w, D[v][w]);
//			k = P[v][w];
//			printf("path:%d", v);
//			while (k != w)
//			{
//				printf(" -> %d", k);
//				k = P[k][w];
//			}
//			printf(" -> %d\n", w);
//		}
//		printf("\n");
//	}
//}
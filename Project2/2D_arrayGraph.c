//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning(disable:4996)
//
//typedef struct graph
//{
//	int vertexCount; //������ ����
//	int** arr; //�����Ҵ�� ������ �迭�� �ּҸ� ���� 
//}graph;
//
//
//void graphInit(graph* pGrp, int count);
//void unDirectedEdge(graph* pGrp, int src, int dst);
//void edgeDisplay(graph* pGrp);
//void memoryFree(graph* pGrp);
//
//
//int main()
//{
//	graph grp;
//
//	graphInit(&grp, 4); // ����ü ������ �ּ�, ������ ����
//	unDirectedEdge(&grp, 0, 1);
//	unDirectedEdge(&grp, 0, 2);
//	unDirectedEdge(&grp, 1, 2);
//	unDirectedEdge(&grp, 2 ,3);
//
//	edgeDisplay(&grp);
//
//	memoryFree(&grp);
//	return 0;
//}
//
//void graphInit(graph* pGrp, int count)
//{
//	int i;
//	pGrp->vertexCount = count;
//	pGrp->arr=(int **)malloc(sizeof(int*)*count); //������ �迭 
//
//	for (i = 0; i < count; i++) {
//		/*pGrp->arr[i] = (int*)malloc(sizeof(int) * count);*/
//		pGrp->arr[i] = (int*)calloc(count,sizeof(int)); //�������迭
//
//	}
//}
//
//void unDirectedEdge(graph* pGrp, int src, int dst)
//{
//	//������ �׷��� : �����
//	pGrp->arr[src][dst] = 1;
//	pGrp->arr[dst][src] = 1;
//
//}
//
//void edgeDisplay(graph* pGrp)
//{
//	int i, j;
//
//	for (i = 0; i < pGrp->vertexCount; i++) {
//		for (j = 0; j < pGrp->vertexCount; j++) {
//
//			printf("%5d", pGrp->arr[i][j]);
//		}
//		puts("");
//	}
//
//}
//
//void memoryFree(graph* pGrp)
//{
//	int i;
//
//	for (i = 0; i < pGrp->vertexCount; i++) {
//		
//		printf("arr[%d] ����Ű�� ������ �迭 ����\n", i);
//		free(pGrp->arr[i]);
//	}
//
//	printf("�������迭�� ����� ���� ������ �迭 ����\n");
//	free(pGrp->arr);
//}

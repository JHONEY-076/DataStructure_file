//#include <stdio.h>
//#include<stdlib.h>
//
//#pragma warning(disable:4996)
//
//typedef struct node {
//	int vertex; //���� 
//	int cost;	//���
//	struct node* next;	//���� ����� �ּ�
//
//}node;
//
//typedef struct graph
//{
//	node* head;
//	int vertexCount;
//
//
//}graph;
//
//void graphInit(graph* pGrp, int count);
//void addUndirectedEdge(graph* pGrp, int src, int dst, int count);
//void adddirectedEdge(graph* pGrp, int src, int dst, int count);
//
//
//int main()
//{
//	graph grp;
//
//	graphInit(&grp, 4);
//
//	addunDirectedEdge(&grp, 0, 1, 1);
//	addunDirectedEdge(&grp, 0, 2, 1);
//	addunDirectedEdge(&grp, 1, 2, 1);
//	addunDirectedEdge(&grp, 2, 3, 1);
//
//
//	return 0;
//}
//
//void graphInit(graph* pGrp, int count)
//{
//
//	int i;
//	pGrp->vertexCount = count; //������ ����
//	pGrp->head= malloc(sizeof(node) * count);
//
//	for (i = 0; i < count; i++) {
//
//		pGrp->head[i].vertex = i;
//		pGrp->head[i].cost = 1;
//		pGrp->head[i].next = NULL;
//	}
//
//}
//
//void adddirectedEdge(graph* pGrp, int src, int dst, int count)
//{
//	//������ �׷��� : ���� �׷����� 2��
//	node* newNode;
//	newNode = (node*)malloc(sizeof(node));
//	newNode->vertex = dst;
//	newNode->next = NULL;
//
//	if (pGrp->head[src].next == NULL) {
//		pGrp->head[src].next = newNode;
//		return;
//	}
//	newNode->next = pGrp->head[src].next;
//	pGrp->head[src].next = newNode;
//
//}
//
// 
//
//
//
//
//
//
//
//void addUndirectedEdge(graph* pGrp, int src, int dst,int cost)
//{
//	//������ �׷��� : ���� �׷����� 2��
//
//	adddirectedEdge(pGrp, src, dst, cost);
//	adddirectedEdge(pGrp, src, dst, cost);
//
//	
//}

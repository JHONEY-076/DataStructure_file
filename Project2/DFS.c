#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#pragma warning (disable : 4996)

//���� ����Ʈ(���� ����Ʈ)�� �̿��� ���� ����
typedef struct node
{
	int value;
	struct node* next;
}node;

typedef struct graph
{
	node* head; //��� ����� �ּҸ� �����ϴ� ������
	int vertexCount; //������ ����
}graph;

void createGraph(graph* pGrp, int count);
void unDirectedEdge(graph* pGrp, int src, int dest);
void directedEdge(graph* pGrp, int src, int dest);
void displayEdge(graph* pGrp);
void memoryFree(graph* pGrp);
void DFS_stack(graph* pGrp, int src);
void BFS_queue(graph* pGrp, int src);
void DFS_reculsive(graph* pGrp, int src);
void DFS_calc(graph* pGrp, int src, int* visisted);

int main()
{
	graph grp; //����ü ���� ����

	createGraph(&grp, 10);

	unDirectedEdge(&grp, 0, 1); //������׷����� ���� ����
	unDirectedEdge(&grp, 0, 2); //������׷����� ���� ����
	unDirectedEdge(&grp, 0, 3); //������׷����� ���� ����
	unDirectedEdge(&grp, 1, 2); //������׷����� ���� ����
	unDirectedEdge(&grp, 1, 4); //������׷����� ���� ����
	unDirectedEdge(&grp, 2, 3); //������׷����� ���� ����
	unDirectedEdge(&grp, 2, 4); //������׷����� ���� ����
	unDirectedEdge(&grp, 2, 5); //������׷����� ���� ����
	unDirectedEdge(&grp, 3, 5); //������׷����� ���� ����
	unDirectedEdge(&grp, 4, 5); //������׷����� ���� ����
	unDirectedEdge(&grp, 4, 8); //������׷����� ���� ����
	unDirectedEdge(&grp, 5, 6); //������׷����� ���� ����
	unDirectedEdge(&grp, 6, 7); //������׷����� ���� ����
	unDirectedEdge(&grp, 6, 8); //������׷����� ���� ����
	unDirectedEdge(&grp, 7, 8); //������׷����� ���� ����
	unDirectedEdge(&grp, 8, 9); //������׷����� ���� ����

	displayEdge(&grp);

	DFS_stack(&grp, 0); //��������� �ѱ�
	BFS_queue(&grp, 0);
	DFS_reculsive(&grp, 0);

	memoryFree(&grp);

	return 0;
}

void createGraph(graph* pGrp, int count)
{
	int i;
	pGrp->vertexCount = count;
	pGrp->head = (node*)malloc(sizeof(node) * count);//������� ��� ����

	for (i = 0; i < count; i++) //������ ������ŭ �ݺ�
	{
		pGrp->head[i].value = i; //��������� ���� ����
		pGrp->head[i].next = NULL; //��������� ���� ���� NULL(�������� ����)
	}
}

void directedEdge(graph* pGrp, int src, int dest)
{
	//���� �׷���
	node* newNode;
	newNode = (node*)malloc(sizeof(node)); //������ ��� ����
	newNode->value = dest;
	newNode->next = NULL;

	if (pGrp->head[src].next == NULL) //ù���� ����Ǵ°ž�??
	{
		pGrp->head[src].next = newNode;
		return;
	}
	//�̹� ����� �������� �ִ� ���??? �� �� �߰� => O(1)
	newNode->next = pGrp->head[src].next;
	pGrp->head[src].next = newNode;
}

void unDirectedEdge(graph* pGrp, int src, int dest)
{
	//������ �׷��� : ����� : ����׷����� 2��
	directedEdge(pGrp, src, dest); //����׷���1
	directedEdge(pGrp, dest, src); //����׷���2
}

void displayEdge(graph* pGrp)
{
	//���Ḯ��Ʈ ��ȸ
	int i;
	node* curNode;

	for (i = 0; i < pGrp->vertexCount; i++)
	{
		printf("����� ���� : %d => ", pGrp->head[i].value);
		curNode = pGrp->head[i].next;
		while (curNode != NULL)
		{
			printf("%4d", curNode->value);
			curNode = curNode->next;
		}
		puts("");
	}
}

void memoryFree(graph* pGrp)
{
	node* delNode;
	int i;

	for (i = 0; i < pGrp->vertexCount; i++)
	{
		while (pGrp->head[i].next != NULL)
		{
			delNode = pGrp->head[i].next; //ù ��带 ������ ���� ����
			pGrp->head[i].next = delNode->next; //head�� ����
			printf("������ ��� %d����\n", delNode->value);
			free(delNode); //delNode����
		}
	}

	printf("����� ��� �迭 ����\n");
	free(pGrp->head); //head�� ����Ű�� �޸𸮸� ����
}

void DFS_stack(graph* pGrp, int src)
{
	//1. push -> �湮üũ
	//2. ������ ��� �ִ��� Ȯ��???
	//3. ������� �ʴٸ�??? pop -> ��ȸ(���)

	node* curNode;
	int popValue; //������ �� ����
	//int*visited = (int*)malloc(sizeof(int) * pGrp->vertexCount); //boolean visited array
	int* visited = (int*)calloc(pGrp->vertexCount, sizeof(int)); //boolean visited array
	stack stk; //����ü ���� ����(���� ����)
	createStack(&stk, pGrp->vertexCount); //���� �ʱ�ȭ

	push(&stk, src); //��� ���� push
	visited[src] = 1; //�湮üũ
	printf("DFS(Depth First Search) with Stack : ");

	while (!isStackEmpty(&stk)) //������ ��� �ִٸ�? 1�� ����
	{
		popValue = pop(&stk); //���� pop
		printf("%d ", popValue); //�����鼭 ���!!!
		curNode = pGrp->head[popValue].next; //���� ���� �湮

		while (curNode != NULL)
		{
			if (visited[curNode->value] == 0) //�湮�� ���� ����??
			{
				push(&stk, curNode->value);//push
				visited[curNode->value] = 1; //�湮üũ
			}
			curNode = curNode->next;
		}
	}
	puts("");
	free(stk.data); //���� �޸� ����
	free(visited); //�湮 �迭 ����
}
//void BFS_queue(graph* pGrp, int src)
//{
//	//1. enqueue -> �湮üũ
//	//2. ť�� ��� �ִ��� Ȯ��???
//	//3. ������� �ʴٸ�??? dequeue -> ��ȸ(���)
//
//	node* curNode;
//	int popValue; //������ �� ����
//	//int*visited = (int*)malloc(sizeof(int) * pGrp->vertexCount); //boolean visited array
//	int* visited = (int*)calloc(pGrp->vertexCount, sizeof(int)); //boolean visited array
//	queue que; //����ü ���� ����(ť ����)
//	createQueue(&que, pGrp->vertexCount);
//
//	enqueue(&que, src); //��� ���� enqueue
//	visited[src] = 1; //�湮üũ
//	printf("BFS(Breadth First Search) with Queue : ");
//
//	while (!isQueueEmpty(&que)) //ť�� ��� �ִٸ�? 1�� ����
//	{
//		popValue = dequeue(&que); //ť���� dequeue
//		printf("%d ", popValue); //�����鼭 ���!!!
//		curNode = pGrp->head[popValue].next; //���� ���� �湮
//
//		while (curNode != NULL) //���� ���� ��尡 �ִٸ�??
//		{
//			if (visited[curNode->value] == 0) //�湮�� ���� ����??
//			{
//				enqueue(&que, curNode->value);//enqueue
//				visited[curNode->value] = 1; //�湮üũ
//			}
//			curNode = curNode->next;
//		}
//	}
//	puts("");
//	free(que.data); //ť �޸� ����
//	free(visited); //�湮 �迭 ����
//}

void DFS_reculsive(graph* pGrp, int src)
{
	int* visited = (int*)calloc(pGrp->vertexCount, sizeof(int));

	printf("DFS with reculsive call : ");
	printf("%d ", pGrp->head[src].value); //�湮(���)

	DFS_calc(pGrp, src, visited); //���ȣ�� �Լ�
	puts("");
	free(visited); //�湮 �迭 ����
}

void DFS_calc(graph* pGrp, int src, int* visited)
{
	node* curNode;

	visited[src] = 1; //����� �湮 üũ

	curNode = pGrp->head[src].next; //������
	while (curNode)//�������� �ִٸ�???
	{
		if (visited[curNode->value] == 0)
		{
			printf("%d ", curNode->value);//�������� �湮(���)
			DFS_calc(pGrp, curNode->value, visited); //�������� ������� �ǵ��� ���ȣ��
		}
		curNode = curNode->next;
	}
}
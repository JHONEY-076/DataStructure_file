//#include "singleLinkedlist.h"
//#include <stdio.h>  // printf(), scanf()
//#include <stdlib.h>  // malloc(), free()
//#pragma warning(disable:4996)
//
///*----------------------------------------------------------------------------------
//Function name	: createList - ���� ����Ʈ ���� �� �ʱ�ȭ
//Parameters		: lp - ����Ʈ ���� ����ü�� �ּ�
//Returns			: ���� - TRUE / ���� - FALSE
//----------------------------------------------------------------------------------*/
//int createList(List* lp)
//{
//	if (lp != FALSE) {
//		lp->head = (Node*)malloc(sizeof(Node));
//		lp->tail= (Node*)malloc(sizeof(Node));
//		
//		lp->head->next = lp->tail;
//		lp->tail->next = lp->tail;
//
//		lp->size = 0;
//		return TRUE;
//	}
//	else {
//		return FALSE;
//	}
//
//	//if (lp == NULL) {
//	//	return FALSE;
//	//}
//
//	//lp->head = (Node*)malloc(sizeof(Node));
//	//if (lp->head == NULL) {
//	//	return FALSE;
//	//}
//
//	//lp->tail = (Node*)malloc(sizeof(Node));
//	//if (lp->tail == NULL) {
//	//	 free(lp->head);
//	//	return FALSE;
//	//}
//
//
//	//lp->head->next = lp->tail;
//	//lp->tail->next = lp->tail;
//	//lp->size = 0;
//
//	//return TRUE;
//}
//
///*----------------------------------------------------------------------------------
//Function name	: addFirst - head node �ڿ� node �߰�(���� ����)
//Parameters		: lp - ����Ʈ ���� ����ü�� �ּ�
//				  data - �߰��� ������
//Returns			: ���� - TRUE / ���� - FALSE
//----------------------------------------------------------------------------------*/
//int addFirst(List* lp, int data)
//{
//	if (lp != FALSE) {
//
//		Node* np = (Node*)malloc(sizeof(Node));
//		np->data = data;
//		np->next = lp->head->next;
//		lp->head->next = np;
//		++lp->size;
//		return TRUE;
//	}
//	else {
//		return FALSE;
//	}
//
//	//Node* np;
//
//	//if (lp == NULL) {
//	//	return FALSE;
//	//}
//
//	//np = (Node*)malloc(sizeof(Node));
//	//if (np != NULL) {
//	//	np->data = data;
//	//	np->next = lp->head->next;
//	//	lp->head->next = np;
//	//	++lp->size;
//	//	return TRUE;
//	//}
//	//else {
//	//	return FALSE;
//	//}
//}
///*----------------------------------------------------------------------------------
//Function name	: addLast - tail node �տ� �� node �߰�(���� ����)
//Parameters		: lp - ����Ʈ ���� ����ü�� �ּ�
//				  data - �߰��� ������
//Returns			: ���� - TRUE / ���� - FALSE
//----------------------------------------------------------------------------------*/
//int addLast(List* lp, int data)
//{
//	Node* btp;
//
//	if (lp != FALSE) {
//			
//		Node* np = (Node*)malloc(sizeof(Node));
//		np->data = data;
//		np->next = lp->tail;
//
//		btp = lp->head;
//		while (btp->next != lp->tail) {
//			btp = btp->next;
//		}
//
//
//		btp->next = np;
//		++lp->size;
//		return TRUE;
//	}
//	else {
//		return FALSE;
//	}
//
//	/*Node*np;
//	Node* btp;
//
//	if (lp == NULL) {
//		return FALSE;
//	}
//
//	np = (Node*)malloc(sizeof(Node));
//	if (np != NULL) {
//		np->data = data;
//		np->next = lp->tail;
//
//		btp = lp->head;
//		while (btp->next != lp->tail) {
//			btp = btp->next;
//		}
//
//		btp->next = np;
//		++lp->size;
//		return TRUE;
//	}
//	else {
//		return FALSE;
//	}*/
//
//}
//
///*----------------------------------------------------------------------------------
//Function name	: displayList - ����Ʈ ���� ��� ������ ���
//Parameters		: lp - ����Ʈ ���� ����ü�� �ּ�
//Returns			: ����
//----------------------------------------------------------------------------------*/
//void displayList(List* lp)
//{
//	Node* cp;
//
//	if (lp != FALSE) {
//		cp = lp->head->next;
//
//		while (cp != lp->tail) {
//
//			printf("%d\n", cp->data);
//			cp = cp->next;
//		}
//	}
//
//	printf("\n");
//
//	return;
//
//
//	//Node* cp;
//	//if (lp == NULL) {
//	//	return;
//	//}
//
//	//cp = lp->head->next;
//
//	//while (cp != lp->tail) {
//
//	//	printf("%d\n", cp->data);
//	//	cp = cp->next;
//	//}
//	//printf("\n");
//
//	//return;
//
//}
//
///*----------------------------------------------------------------------------------
//Function name	: searchNode - data�� ��ġ�ϴ� ù ��° node �˻�
//Parameters		: lp - ����Ʈ ���� ����ü�� �ּ�
//				  data - �˻��� ������
//Returns			: ���� - �˻��� ����� �ּ� / ���� - NULL pointer
//----------------------------------------------------------------------------------*/
//Node* searchNode(List* lp, int data)
//{
//	// TODO
//
//	return 0; // return ���� ������ �����ϼ���.
//}
///*----------------------------------------------------------------------------------
//Function name	: removeNode - data�� ��ġ�ϴ� ù ��° ��� ����
//Parameters		: lp - ����Ʈ ���� ����ü�� �ּ�
//data - ������ ������
//Returns			: ���� - TRUE / ���� - FALSE
//----------------------------------------------------------------------------------*/
//int removeNode(List* lp, int data)
//{
//	// TODO
//
//	return ; // return ���� ������ �����ϼ���.
//}
///*----------------------------------------------------------------------------------
//Function name	: sortList - ��� ����(��������)
//Parameters		: lp - ����Ʈ ���� ����ü�� �ּ�
//Returns			: ����
//----------------------------------------------------------------------------------*/
//void sortList(List* lp)
//{
//	// TODO
//
//	return;
//}
///*----------------------------------------------------------------------------------
//Function name	: destroyList - ����Ʈ ���� ��� ���(head, tail ��� ����)�� ����
//Parameters		: lp - ����Ʈ ���� ����ü�� �ּ�
//Returns			: ����
//----------------------------------------------------------------------------------*/
//void destroyList(List* lp)
//{
//	// TODO
//
//	return;
//}
//

//#include "session 11.h"
//#include <stdio.h>  // printf(), scanf()
//#include <stdlib.h>  // malloc(), free()
//#include <string.h>
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
//		lp->tail = (Node*)malloc(sizeof(Node));
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
//int addFirst(List* lp, char* data)
//{
//	if (lp != FALSE) {
//
//		Node* np = (Node*)malloc(sizeof(Node));
//		strcpy(np->data, data);
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
//int addLast(List* lp, char* data)
//{
//	Node* btp;
//
//	if (lp != FALSE) {
//
//		Node* np = (Node*)malloc(sizeof(Node));
//		strcpy(np->data, data);
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
//			printf("%s\n", cp->data);
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
//Node* searchNode(List* lp, char* data)
//{
//
//	Node* cp;
//
//	if (lp == FALSE) {
//		return FALSE;
//	}
//
//	cp = lp->head->next;
//
//	while (cp != lp->tail) {
//		if (strcmp(cp->data, data) == 0) {
//			return cp;
//		}
//		else {
//			cp = cp->next;
//		}
//	}
//
//	return NULL;
//
//}
///*----------------------------------------------------------------------------------
//Function name	: removeNode - data�� ��ġ�ϴ� ù ��° ��� ����
//Parameters		: lp - ����Ʈ ���� ����ü�� �ּ�
//data - ������ ������
//Returns			: ���� - TRUE / ���� - FALSE
//----------------------------------------------------------------------------------*/
//int removeNode(List* lp, char* data)
//{
//	Node* cp;
//	Node* dp;
//
//	if (lp != FALSE) {
//		cp = lp->head;
//		dp = searchNode(lp, data);
//		if (dp != NULL) {
//			while (cp->next != dp) {
//				cp = cp->next;
//			}
//			cp->next = dp->next;
//			free(dp);
//			--lp->size;
//			return TRUE;
//		}
//	}
//	else {
//		return FALSE;
//	}
//
//	/*Node* delp;
//	Node* curp;
//
//	if (lp == NULL) {
//		return FALSE;
//	}*/
//
//
//
//	/*delp = searchNode(lp, data);
//	if (delp != NULL) {
//		curp = lp->head;
//		while (curp->next != delp) {
//			curp = curp->next;
//		}
//
//		curp->next = delp->next;
//		free(delp);
//		--lp->size;
//		return TRUE;
//	}
//	else {
//		return FALSE;
//	}*/
//
//
//
//
//
//
//
//}
///*----------------------------------------------------------------------------------
//Function name	: sortList - ��� ����(��������)
//Parameters		: lp - ����Ʈ ���� ����ü�� �ּ�
//Returns			: ����
//----------------------------------------------------------------------------------*/
//void sortList(List* lp)
//{
//	Node* cp;
//	Node* np;
//	char tmp[80];
//	if (lp != FALSE) {
//		cp = lp->head->next;
//		while (cp->next != lp->tail) {
//			np = cp->next;
//			while (np != lp->tail) {
//				if (strcmp(cp->data, np->data) > 0) {
//					strcpy(tmp, cp->data);
//					strcpy(cp->data, np->data);
//					strcpy(np->data, tmp);
//				}
//				np = np->next;
//
//			}
//			cp = cp->next;
//		}
//
//
//	}
//	else {
//		return;
//	}
//
//	/*node* curp;
//	node* nextp;
//	int tmp;
//
//	if (lp == null) {
//		return;
//	}
//
//	curp = lp->head->next;
//	while (curp->next != lp->tail) {
//		nextp = curp->next;
//		while (nextp != lp->tail) {
//			if (curp->data > nextp->data) {
//				tmp = curp->data;
//				curp->data = nextp->data;
//				nextp->data = tmp;
//			}
//			nextp = nextp->next;
//		}
//	}
//	curp = curp->next;*/
//
//}
///*----------------------------------------------------------------------------------
//Function name	: destroyList - ����Ʈ ���� ��� ���(head, tail ��� ����)�� ����
//Parameters		: lp - ����Ʈ ���� ����ü�� �ּ�
//Returns			: ����
//----------------------------------------------------------------------------------*/
//void destroyList(List* lp)
//{
//	Node* cp;
//	Node* tmp;
//
//
//	if (lp != FALSE) {
//		cp = lp->head->next;
//		while (cp != lp->tail) {
//			tmp = cp->next;
//			free(cp);
//			cp = tmp;
//		}
//
//		free(lp->head);
//		free(lp->tail);
//
//		lp->head = NULL;
//		lp->tail = NULL;
//		lp->size = 0;
//
//	}
//
//	else {
//		return;
//	}
//
//}
//

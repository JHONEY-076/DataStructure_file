//#include <stdio.h>
//#include <string.h>
//#include "session 11.h"
//#pragma warning(disable:4996)
//
//int dataFiledLoad(List* lp);
//
///*----------------------------------------------------------------------------------
//  Function name : main
//----------------------------------------------------------------------------------*/
//int main()
//{
//	List list;				//����Ʈ���� ����ü ���� 
//	size_t tot_length = 0;  //size_t== unsighed ������ , �ܾ��� ����
//	int tot_wCnt = 0;		//�� �ܾ��� ����
//	Node* cp;
//
//
//	int bres = createList(&list);
//	if (bres == FALSE) {
//		printf("@list ���� ����!\n");
//		getchar();
//		return 0;
//	}
//
//	bres = dataFiledLoad(&list);
//	if (bres == FALSE) {
//		printf("file open error\n");
//		getchar();
//		return 0;
//	}
//
//	sortList(&list);
//
//	cp = list.head->next;
//
//	while (cp != list.tail) {
//		tot_wCnt++;
//		tot_length += strlen(cp->data);
//		printf("%2d��° �ܾ�: %s\n", tot_wCnt, cp->data);
//		cp = cp->next;
//
//	}
//	float average = 0;
//	average = (double)tot_length / tot_wCnt;
//	printf("\n��ü �ܾ��� ����: %3d\t\t ��� �ܾ��� ����: %.2lf\n", tot_wCnt, average);
//
//
//	destroyList(&list);
//
//	getchar();
//	return 0;
//}
//
//int dataFiledLoad(List* lp)
//{
//	FILE* fp;
//	char word[80];
//	Node* resp;
//
//	fp = fopen("E:\\flower.txt", "rt");
//	if (fp == NULL) {
//		return FALSE;
//	}
//
//	while (fscanf(fp, "%s", word) != EOF) {
//		resp = searchNode(lp, word);
//		if (resp == NULL)
//			addLast(lp, word);
//	}
//	fclose(fp);
//	return TRUE;
//
//
//}
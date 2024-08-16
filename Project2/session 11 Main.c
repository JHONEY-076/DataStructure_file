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
//	List list;				//리스트관리 구조체 변수 
//	size_t tot_length = 0;  //size_t== unsighed 정수형 , 단어의 길이
//	int tot_wCnt = 0;		//총 단어의 개수
//	Node* cp;
//
//
//	int bres = createList(&list);
//	if (bres == FALSE) {
//		printf("@list 생성 실패!\n");
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
//		printf("%2d번째 단어: %s\n", tot_wCnt, cp->data);
//		cp = cp->next;
//
//	}
//	float average = 0;
//	average = (double)tot_length / tot_wCnt;
//	printf("\n전체 단어의 개수: %3d\t\t 평균 단어의 길이: %.2lf\n", tot_wCnt, average);
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
//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning(disable:4996)
//void printArray(int*ap, unsigned int cnt);
//void initArray(int*ap, unsigned int size);
//int searchArray(int*ap, unsigned int size, int sData);
//
//int main( ) {
//
//	int num[10];
//	unsigned int size;
//	int sData;
//	int res = 0;
//	int i;
//	size = sizeof(num) / sizeof(num[0]);
//
//	initArray(num, size);
//	printArray(num, size);
//
//	for (i = 0; i < 5; i++) {
//		printf("# 검색할 정수를 입력하시오: ");
//		scanf("%d", &sData);
//		res = searchArray(num, size, sData);
//		if (res != -1) {
//			printf("%d는 %d번 방에 있습니다.\n", sData, res);
//		}
//		else {
//			printf("%d는 존재하지 않습니다.\n", sData);
//		}
//	}
//
//	getchar();
//	getchar();
//	return 0;
//
//}
//
//void initArray(int*ap, unsigned int size) {
//
//	unsigned int i;
//	for ( i = 0; i < size; i++) {
//		 ap[i] = rand()%20 + 1;
//	}
//}
//
//
//
//void printArray(int*ap, unsigned int cnt) {
//	
//	printf("배열 : ");
//	for (int i = 0; i < cnt; i++) {
//		printf(" %d", ap[i]);
//	}
//
//	printf("\n");
//}
//
//
//int searchArray(int*ap, unsigned int size, int sData)
//{
//	int position = -1;
//	unsigned int i;
//	for (i = 0; i <= size; i++) {
//		if (ap[i] == sData) {
//			position = i;
//			break;
//		}
//
//	}
//	return position;
//
//}
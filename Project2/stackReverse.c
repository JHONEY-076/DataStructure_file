//#include <stdio.h>
//#include <string.h>
//#pragma warning(disable:4996) 
//#define size 100
//#define MAX 1000
//
//
//typedef struct stack {
//	int arr[100]; // int �� ������ 100�� 
//	int top;
//}stacktype;
//
//void init(stacktype* s) {
//
//	s->top = -1; // �迭�� index 0 ���� ���� 
//	
//}
//
//
////empty : return 1
////!empty : return 0 
//int is_empty(stacktype* s) {
//
//	if (s->top == -1) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//
////full : return 1
////!full: return 0
//
//int is_full(stacktype* s) {
//
//	if (s->top == size - 1)
//		return 1;
//	return 0;
//}
//
//
//void push(stacktype* s, char str)
//{
//	if (is_full(s))
//	{
//		printf("stack is full");
//		exit(1);
//	}
//	s->arr[++(s->top)] = str;
//	
//}
//
//
//char pop(stacktype* s) {
//	if (is_empty(s)==1) {
//		printf("stack is empty");
//		exit(1);
//		return -1;
//	}
//	
//	return s->arr[(s->top)--]; // ���� �����ڰ� �տ� ������ ��������
//							   // ���� ���� �ǰ� �ڿ� ������ ���߿� ���� �ȴ� 
//	
//}
//
//
//int peek(stacktype* s) {
//
//	if (is_empty(s)==1) {
//		printf("stack is empty");
//		exit(1);
//		return -1;
//	}
//	return s->arr[(s->top)];
//
//}
//
//
//int main(void) {
//
//	stacktype s;
//	init(&s); // stack�� �ʱ�ȭ �� 
//	int n;
//	char str[MAX];
//
//	scanf("%d", &n);
//	getchar();
//
//	for (int i = 0; i < n; i++) {
//		
//		gets_s(str, sizeof(str));
//		char* ptr = strtok(str, " ");
//
//		while (ptr != NULL) {
//			for (int i = 0; ptr[i] != '\0'; i++) {
//				push(&s, ptr[i]);
//			}
//			while (!is_empty(&s)) {
//				printf("%c", pop(&s));
//			}
//
//			printf(" ");
//
//			ptr = strtok(NULL, " ");
//			
//		}
//		
//		printf("\n");
//	}
//	
//	return 0;
//}
//

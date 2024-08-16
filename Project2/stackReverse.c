//#include <stdio.h>
//#include <string.h>
//#pragma warning(disable:4996) 
//#define size 100
//#define MAX 1000
//
//
//typedef struct stack {
//	int arr[100]; // int 형 데이터 100개 
//	int top;
//}stacktype;
//
//void init(stacktype* s) {
//
//	s->top = -1; // 배열은 index 0 부터 시작 
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
//	return s->arr[(s->top)--]; // 증감 연산자가 앞에 있으면 먼저실행
//							   // 먼저 실행 되고 뒤에 있으면 나중에 실행 된다 
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
//	init(&s); // stack이 초기화 됨 
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

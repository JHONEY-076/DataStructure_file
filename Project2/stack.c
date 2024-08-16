//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#pragma warning(disable: 4996) 
//#define SIZE 100
//
//
//typedef struct Stack {
//	int arr[100]; // int 형 데이터 100개 
//	int top;
//}StackType;
//
//void init(StackType* s) {
//
//	s->top = -1; // 배열은 index 0 부터 시작 
//	
//}
//
//
////empty : return 1
////!empty : return 0 
//int is_empty(StackType* s) {
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
//
////full : return 1
////!full: return 0
//
//int is_full(StackType* s) {
//
//	if (s->top == SIZE - 1)
//		return 1;
//	return 0;
//}
//
//
//void push(StackType* s, int value)
//{
//	if (is_full(s))
//	{
//		printf("Stack is full");
//		exit(1);
//	}
//	printf("\npushed: %d\n", value);
//
//	s->arr[++(s->top)] = value;
//	
//}
//
//
//int pop(StackType* s) {
//	if (is_empty(s)==1) {
//		printf("Stack is empty");
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
//int peek(StackType* s) {
//
//	if (is_empty(s)==1) {
//		printf("Stack is empty");
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
//	StackType s;
//
//	init(&s); // stack이 초기화 됨 
//
//	push(&s, 3);
//	push(&s, 2);
//	push(&s, 1);
//
//	printf("\npeek %d\n", peek(&s));
//	printf("\npop %d\n", pop(&s));
//	printf("\npop %d\n", pop(&s));
//	printf("\npop %d\n", pop(&s));
//
//	printf("\npop %d\n", pop(&s));
//	return 0;
//
//
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#pragma warning(disable: 4996) 
//#define SIZE 100
//
//
//typedef struct Stack {
//	int arr[100]; // int �� ������ 100�� 
//	int top;
//}StackType;
//
//void init(StackType* s) {
//
//	s->top = -1; // �迭�� index 0 ���� ���� 
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
//
//	s->arr[++(s->top)] = value;
//
//}
//
//
//int pop(StackType* s) {
//	if (is_empty(s) == 1) {
//		printf("Stack is empty");
//		exit(1);
//		return -1;
//	}
//
//	return s->arr[(s->top)--]; // ���� �����ڰ� �տ� ������ ��������
//	// ���� ���� �ǰ� �ڿ� ������ ���߿� ���� �ȴ� 
//
//}
//
//
//int peek(StackType* s) {
//	if (is_empty(s)) {
//		printf("Stack is empty");
//		exit(1);
//	}
//	return s->arr[(s->top)];
//}
//
//int eval(char exp[])
//{
//	int op1, op2, value;
//	char ch;
//	int len = strlen(exp);
//
//	StackType s;
//	init(&s);
//
//	for (int i = 0; i < len; i++)
//	{
//		ch = exp[i];
//		if (ch != '+' && ch != '-' && ch != '*' && ch != '/')
//		{
//			value = ch - '0'; //���� -> ���ڷ� �ٲ��� 
//			push(&s,value);
//		}
//		else {
//			op2 = pop(&s);
//			op1 = pop(&s);
//			switch (ch)
//			{
//			case'+':
//				push(&s, op1 + op2);
//				break;
//			case '-':
//				push(&s, op1 - op2);
//				break;
//			case '*':
//				push(&s, op1 * op2);
//				break;
//			case'/':
//				push(&s, op1 / op2);
//				break;
//			}
//
//		}
//
//	}
//
//	return pop(&s);
//}
//
//int main(void) {
//
//	int result;
//	result = eval("82/3-32*+");
//	printf("--> %d", result);
//	return 0;
//
//
//}
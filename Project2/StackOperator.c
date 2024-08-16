//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#pragma warning(disable: 4996) 
//#define SIZE 100
//
//
//typedef struct Stack {
//	char arr[100]; // int �� ������ 100�� 
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
//void push(StackType* s, char value)
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
//char pop(StackType* s) {
//	if (is_empty(s)==1) {
//		printf("Stack is empty");
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
//char peek(StackType*s) {
//	if (is_empty(s)) {
//		printf("Stack is empty");
//		exit(1);
//	}
//	return s->arr[(s->top)];
//}
//
//
//int prec(char op) {
//
//	switch (op)
//	{
//	case'(':case')':
//		return 0;
//	case'+':case'-':
//		return 1;
//	case '*': case'/' :
//		return 2;
//
//	}
//
//}
//
//
//
//
////�ش� ���� ǥ��� ���ڿ��� �ǿ����ڿ� �����ڸ� ������ ����ǥ������� �켱������ �Ű� ������ִ� �Լ�
//void infix_to_postfix(char exp[]) {
//
//	char ch, top_op;
//	int len = strlen(exp);
//	StackType s;
//	init(&s);
//
//
//	for (int i = 0; i < len; i++) {
//
//		ch = exp[i];
//		switch (ch)
//		{
//
//
//		/*Stack�� ������� �����鼭 ������
//		�ֻ���� ch���� ũ�ų� ������� pop���ְ�, ch�� push ����  */
//		case '+': case '-': case '*': case '/':
//			while (!is_empty(&s) && prec(ch) <= prec(peek(&s)))
//				printf("%c", pop(&s));
//			push(&s, ch);
//			break;
//		
//		/* '(' push ����*/
//		case '(':
//			push(&s,ch);
//			break;
//
//		//'('�� ���ö����� pop����
//		case ')':
//			top_op = pop(&s);
//			while (top_op != '(')
//			{
//				printf("%c", top_op);
//				top_op = pop(&s);
//			}
//			break;
//		/*������ �ǿ����� ���*/
//		default:
//			printf("%c", ch);
//			break;
//		}
//	}
//	//������ �������� pop ���ֱ� 
//	while (!is_empty(&s))
//		printf("%c", pop(&s)); 
//}
//
//int main(void) { 
//
//	//char* s = "(2+3)*4+9";
//	//printf("%s\n", s);
//	//infix_to_postfix(s);
//	//printf("\n");
//
//	
//
//	char str[80];
//	scanf("%s",&str);
//	infix_to_postfix(str);
//	printf("\n");
//
//
//	return 0;
//
//
//}
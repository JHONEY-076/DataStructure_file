//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#pragma warning(disable: 4996) 
//#define SIZE 100
//
//
//typedef struct Stack {
//	char arr[100]; // int 형 데이터 100개 
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
//	return s->arr[(s->top)--]; // 증감 연산자가 앞에 있으면 먼저실행
//							   // 먼저 실행 되고 뒤에 있으면 나중에 실행 된다 
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
////해당 중위 표기식 문자열의 피연산자와 연사자를 구분해 후위표기식으로 우선순위를 매겨 출력해주는 함수
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
//		/*Stack이 비워있지 않으면서 스택의
//		최상단이 ch보다 크거나 같은경우 pop해주고, ch를 push 해줌  */
//		case '+': case '-': case '*': case '/':
//			while (!is_empty(&s) && prec(ch) <= prec(peek(&s)))
//				printf("%c", pop(&s));
//			push(&s, ch);
//			break;
//		
//		/* '(' push 해줌*/
//		case '(':
//			push(&s,ch);
//			break;
//
//		//'('가 나올때까지 pop해줌
//		case ')':
//			top_op = pop(&s);
//			while (top_op != '(')
//			{
//				printf("%c", top_op);
//				top_op = pop(&s);
//			}
//			break;
//		/*나머지 피연산자 출력*/
//		default:
//			printf("%c", ch);
//			break;
//		}
//	}
//	//스택이 차있으면 pop 해주기 
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
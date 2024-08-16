//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define MAX 100
//
//
//
//typedef struct Stack {
//	char arr[MAX];
//	int top;
//}StackType;
//
//
//void init(StackType* s) {
//
//	s->top = -1;
//}
//
//
//int is_empty(StackType* s) {
//
//	if (s->top == -1) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//
//}
//
//
//int is_full(StackType* s) {
//
//	if (s->top == MAX - 1) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//
//void push(StackType* s, char* cp) {
//
//	if (is_full(s) == 1) {
//		printf("������ ���� á��\n");
//		exit(1);
//	}
//	s->arr[++(s->top)] = cp;
//}
//
//
//char pop(StackType* s)
//{
//	char out; 
//	out = s->arr[(s->top)--];
//	return out;
//}
//
//int check_palidrom(char str[]) {
//	StackType* s;
//	int i = 0;
//	init(&s);
//
//
//	for (int i = 0; i <= str[i]; i++) {
//		if ('a' <= str[i] && str[i] <= 'z') {
//			if (is_full(&s) == 1) {
//				printf("������ ���� á���ϴ�.\n");
//				return 0;
//			}
//			push(&s, str[i]);
//		}
//		else if ('A' <= str[i] && str[i] <= 'Z') {
//			if (is_full(&s) == 1) {
//				printf("������ ���� á���ϴ�.\n");
//				return 0;
//			}
//			char c = str[i] + ('a' - 'A');
//			push(&s, c);
//		}
//
//	}
//
//
//
//
//	/*while (str[i] != NULL) {
//		if ('a' <= str[i] && str[i] <= 'z') {
//			if (is_full(&s) == 1) {
//				printf("������ ���� á���ϴ�.\n");
//				return 0;
//			}
//			push(&s, str[i]);
//		}
//		else if ('A' <= str[i] && str[i] <= 'Z') {
//			if (is_full(&s) == 1) {
//				printf("������ ���� á���ϴ�.\n");
//				return 0;
//			}
//			char c = str[i] + ('a' - 'A');
//			push(&s, c);
//		}
//		i++;
//	}
//	*/
//
//
//
//	//for (int i = 0; i < str[i]; i++) {
//	//	if (isalpha(str[i] != 0)) {
//	//		if ('a' <= str[i] && str[i] <= 'z') {
//	//			if (pop(&s) != str[i])
//	//				return 0;
//	//		}
//	//		else if ('A' <= str[i] && str[i] < 'Z') {
//	//			char a = str[i] + ('a' - 'A');
//	//			if (pop(&s) != a)
//	//				return 0;
//	//		}
//
//	//	}
//
//	//	
//	//}
//	//
//
//
//
//	i = 0;
//	int j = 0;
//	while (str[i + j] != NULL) {
//		if (isalpha(str[i + j]) != 0) {
//			if ('a' <= str[i + j] && str[i + j] <= 'z') {
//				if (pop(&s) != str[i + j])
//					return 0;
//			}
//			else if ('A' <= str[i + j] && str[i + j] <= 'Z') {
//				char a = str[i] + ('a' - 'A');
//				if (pop(&s) != a)
//					return 0;
//			}
//			i++;
//		}
//		else j++;
//	}
//	
//
//
//	if (!is_empty(&s) == 1) {
//		printf("�˻簡 ����� �̷������ �ʾҽ��ϴ�.");
//	}
//	return 1;
//}
//
//
//
//int main(void)
//{
//	char str[MAX] = { 0 };
//
//	printf("���ڿ��� �Է��Ͻÿ�>>");
//	gets_s(str, sizeof(str));
//	if (check_palidrom(str) == 1) {
//		printf("ȸ���Դϴ�.\n");
//	}
//	else {
//		printf("ȸ���� �ƴմϴ�.\n");
//	}
//
//
//}
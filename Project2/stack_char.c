//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning(disable: 4996) 
//#define SIZE 80
//
//typedef struct Stack {
//    char arr[SIZE]; // char Ÿ�� �迭
//    int top;
//} StackType;
//
//void init(StackType* s) {
//    s->top = -1;
//}
//
//int is_empty(StackType* s) {
//    return (s->top == -1);
//}
//
//int is_full(StackType* s) {
//    return (s->top == SIZE - 1);
//}
//
//void push(StackType* s, char c) {
//    if (is_full(s)) {
//        printf("������ ���� á���ϴ�.\n");
//        exit(1);
//    }
//    s->arr[++(s->top)] = c;
//}
//
//char pop(StackType* s) {
//    if (is_empty(s)) {
//        printf("������ ��� �ֽ��ϴ�.\n");
//        exit(1);
//    }
//    return s->arr[(s->top)--];
//}
//
//char peek(StackType* s) {
//    if (is_empty(s)) {
//        printf("������ ��� �ֽ��ϴ�.\n");
//        exit(1);
//    }
//    return s->arr[s->top];
//}
//
//int main(void) {
//    StackType s;
//    init(&s);
//
//    char str[SIZE] = { 0 };
//    printf("���ڿ��� �Է��ϼ���: ");
//    scanf("%s", str);
//
//    for (int i = 0; str[i] != '\0'; i++) {
//        push(&s, str[i]);
//    }
//
//    printf("���ÿ��� ���ŵ� ���ڿ�: ");
//    while (!is_empty(&s)) {
//        printf("%c", pop(&s));
//    }
//    printf("\n");
//
//    return 0;
//}
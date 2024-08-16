//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
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
//int check(char* str) {
//
//    StackType* s;
//    char ch,open_ch;
//    init(&s);
//
//    for (int i = 0; i < strlen(str); i++) {
//
//        ch = str[i];
//        switch (ch)
//        {
//        case'(':case'[':case'{':
//            push(&s, ch);
//            break;
//
//        case')':case']':case'}':
//            if (is_empty(&s)) {
//                return 0;
//            }
//            else {
//                open_ch = pop(&s);
//                if ((open_ch == ')' ) || (open_ch == '}' ) || (open_ch == ']' ))
//                    return 0;
//                
//                break;
//            }
//        }
//    }
// if (!is_empty(&s)) 
//            return 0;
//            return 1;
//        
//}
//
//
//
//
//int main(void) {
//
//    char str[SIZE] = { 0 };
//    int n;
//
//    scanf("%d", &n);
//
//    for (int i = 0; i < n; i++) {
//        scanf("%s", &str);
//
//
//        if (check(str) == 1) {
//            printf("YES\n", str);
//        }
//        else {
//            printf("NO\n", str);
//        }
//
//    }
//    return 0;
//
//    //printf("���ڿ��� �Է��ϼ���: ");
//    //scanf("%s", &str);
//    //
//    //
//    //if(check(str)==1){
//    //    printf("%s ��ȣ �˻� ����\n", str);
//    //}
//    //else {
//    //    printf("%s ��ȣ �˻� ����\n", str);
//    //}
//
//    //
//
//    //return 0;
//
//
//
//
//
//}
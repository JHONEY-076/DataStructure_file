//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define MAX_DEQUE_SIZE 10003
//#pragma warning(disable: 4996) 
//
//typedef int element;
//typedef struct DequeType {
//	element data[MAX_DEQUE_SIZE];
//	int front, rear;
//}DequeType;
//
//void init_deque(DequeType*d) {
//	d->front = d->rear = 0;
//}
//
//int is_empty(DequeType* d)
//{
//	if (d->front == d->rear) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//int is_full(DequeType* d) {
//	if ((d->rear) + 1 % MAX_DEQUE_SIZE == d->front) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//int add_rear(DequeType* d, element item) {
//	if (is_full(d))
//		return -1;
//	//when data is added in deque, always we should check rear value
//	d->rear = (d->rear + 1) % MAX_DEQUE_SIZE;//rear를 뒤끝으로 이동 
//	d->data[d->rear] = item; //데이터 삽입 
//}
//
//element delete_front(DequeType* d) {
//	if (is_empty(d))
//		return -1;
//	//when data is deleted from deque, always we should check front value
//	d->front = (d->front + 1) % MAX_DEQUE_SIZE; //front를 앞으로 이동 
//	return d->data[d->front]; //데이터 리턴
//}
//
//int add_front(DequeType* d, element item) {
//	if (is_full(d))
//		return -1;
//	d->data[d->front] = item;// front에 데이터 삽입 
//	d->front = (d->front - 1 + MAX_DEQUE_SIZE) % MAX_DEQUE_SIZE; // front를 맨 앞으로 이동
//}
//
//
//
//
//element delete_rear(DequeType* d)
//{
//	int prev = d->rear;
//	if (is_empty(d))
//		return -1;
//	d->rear = (d->rear - 1 + MAX_DEQUE_SIZE) % MAX_DEQUE_SIZE; //rear를 뒤로 이동
//	return d->data[prev];// 데이터 리턴
//}
//
//
//element get_rear(DequeType* d) {
//	if (is_empty(d))
//		return -1;
//
//	return d->data[d->rear];
//}
//
//element get_front(DequeType* d) {
//	if (is_empty(d))
//		return -1;
//	return d->data[(d->front + 1) % MAX_DEQUE_SIZE];
//}
//
//int size(DequeType* d) {
//    return (d->rear - d->front + MAX_DEQUE_SIZE) % MAX_DEQUE_SIZE;
//}
//
//
//
//
//int main()
//{
//	DequeType*deque;
//	init_deque(&deque);
//
//	int N;
//	char str[100];
//	int num;
//	scanf("%d", &N);
//
//
//	for(int i=0;i<N;i++){
//		scanf("%s", str);
//		if (strcmp(str, "push_front") == 0) {
//			scanf("%d", &num);
//			add_front(&deque, num);
//		}
//		else if (strcmp(str, "push_back") == 0) {
//			scanf("%d", &num);
//			add_rear(&deque, num);
//		}
//		else if (strcmp(str, "pop_front") == 0) {
//			printf("%d\n",delete_front(&deque));
//		}
//		else if (strcmp(str, "pop_back") == 0) {
//			printf("%d\n", delete_rear(&deque));
//		}
//		else if (strcmp(str, "size") == 0) {
//			printf("%d\n", size(&deque));
//		}
//		else if (strcmp(str, "empty") == 0) {
//			printf("%d\n", is_empty(&deque));
//		}
//		else if (strcmp(str, "front") == 0) {
//			printf("%d\n", get_front(&deque));
//		}
//		else if (strcmp(str, "back") == 0) {
//			printf("%d\n", get_rear(&deque));
//		}
//	}
//
//
//	
//	
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//

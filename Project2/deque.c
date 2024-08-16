//#include <stdio.h>
//#include <stdlib.h>
//#define MAX_DEQUE_SIZE 5
//
//typedef int element;
//typedef struct DequeType {
//	element data[MAX_DEQUE_SIZE];
//	int front, rear;
//}DequeType;
//
//void error(char* message) {
//	fprintf("stderr, %s\n", message);
//	exit(1);
//}
//
//void init_deque(DequeType* d) {
//	d->front = d->rear = 0;
//}
//
//int is_empty(DequeType* d)
//{
//	return(d->front == d->rear);
//}
//
//int is_full(DequeType* d) {
//	return ((d->rear) + 1 % MAX_DEQUE_SIZE == d->front);
//}
//
//void add_rear(DequeType* d, element item) {
//	if(is_full(d))
//		error("Deque is full");
//	//when data is added in deque, always we should check rear value
//	d->rear = (d->rear + 1) % MAX_DEQUE_SIZE;//rear를 뒤끝으로 이동 
//	d->data[d->rear] = item; //데이터 삽입 
//}
//
//element delete_front(DequeType* d) {
//	if (is_empty(d))
//		error("Deque is empty");
//	//when data is deleted from deque, always we should check front value
//	d->front = (d->front + 1) % MAX_DEQUE_SIZE; //front를 앞으로 이동 
//	return d->data[d->front]; //데이터 리턴
//}
//
//void add_front(DequeType* d, element item) {
//	if (is_full(d))
//		error("Deque is full");
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
//		error("Deque is empty");
//	d->rear = (d->rear - 1 + MAX_DEQUE_SIZE) % MAX_DEQUE_SIZE; //rear를 뒤로 이동
//	return d->data[prev];// 데이터 리턴
//}
//
//
//element get_rear(DequeType* d) {
//	if (is_empty(d))
//		error("Deque is empty");
//	return d->data[d->rear];
//}
//
//element get_front(DequeType* d) {
//	if (is_empty(d))
//		error("Deque is empty");
//	return d->data[(d->front + 1) % MAX_DEQUE_SIZE];
//}
//
//int main(int argc, const char* argv[])
//{
//	DequeType* deque;
//	init_deque(&deque);
//
//	for (int i = 0; i < 3; i++)
//		add_front(&deque, i);
//
//
//	printf("\n%d", get_front(&deque));
//	printf("\n%d", get_rear(&deque));
//
//
//	for (int i = 0; i < 3; i++) {
//		printf("\n%d", delete_rear(&deque));
//	}
//	return 0;
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

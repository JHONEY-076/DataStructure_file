//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#pragma warning(disable: 4996) 
//#define MAX 10003
//
//typedef struct Queue {
//    int front;	//앞쪽 index
//    int rear;	//뒤 쪽 index
//    int data[MAX];
//}Queue;
//
//void init(Queue* q)
//{
//    q->front = q->rear = 0;
//}
//
//
//
//int is_full(Queue* q) {
//    if (q->front == (q->rear + 1) % MAX)
//    {
//        return 1;
//    }
//    else {
//        return 0;
//    }
//}
//
//int is_empty(Queue* q) {
//    if (q->front == q->rear) {
//        return 1;
//    }
//    else {
//        return 0;
//    }
//
//}
//
//void enqueue(Queue* q, int item)
//{
//    if (is_full(q))//큐가 가득 차있는지 확인
//        printf("Queue is Full!\n");
//    else //가득 차있지 않다면
//    {
//        q->data[++(q->rear)] = item;
//    }
//}
//
//int dequeue(Queue* q) {
//    if (is_empty(q))
//    {
//        return -1;
//
//    }
//    return q->data[++(q->front)];
//
//}
//
//int front(Queue* q) {
//    if (is_empty(q))
//    {
//        return -1;
//    }
//    return q->data[q->front + 1];
//}
//
//int back(Queue* q) {
//    if (is_empty(q)) {
//        return -1;
//    }
//    return q->data[q->rear];
//}
//
//int size(Queue* q) {
//    return (q->rear - q->front + MAX) % MAX;
//}
//
//
//
//
//
//int main()
//{
//    Queue q;
//    init(&q);
//    int N;
//    char command1[100];
//    int command2;
//    scanf("%d", &N);
//    for (int i = 0; i < N; i++) {
//        scanf("%s", command1);
//        //printf("%s\n",command1);
//
//        if (strcmp(command1, "push") == 0) {
//            scanf("%d", &command2);
//            enqueue(&q, command2);
//        }
//        else if (strcmp(command1, "pop") == 0) {
//            printf("%d\n", dequeue(&q));
//        }
//        else if (strcmp(command1, "size") == 0) {
//            //printf("%d %d\n",Q.rear,Q.front);
//            printf("%d\n", size(&q));
//        }
//        else if (strcmp(command1, "empty") == 0) {
//            printf("%d\n", is_empty(&q));
//        }
//        else if (strcmp(command1, "front") == 0) {
//            printf("%d\n", front(&q));
//        }
//        else if (strcmp(command1, "back") == 0) {
//            printf("%d\n", back(&q));
//        }
//    }
//
//
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#pragma warning(disable: 4996) 
//#define MAX 5000
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
//    return q->data[q->front+3];
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
//    int n, k;
//    int idx = 0;
//    int number;
//    int res[5000];
//    int i = 0;
//
//    scanf("%d", &n);
//    scanf("%d", &k);
//
//    for (int i = 1; i <= n; i++) {
//        enqueue(&q, i);
//    }
//
//    while (size(&q)!=0) 
//    {
//        idx += 1;
//        number = front(&q);
//        dequeue(&q);
//        if (idx % k == 0) {
//            res[i++] = number;
//        }
//        else {
//            enqueue(&q, number);
//        }
//    }
//
//    printf("<");
//    for (int i = 0; i < n - 1; i++) {
//        printf("%d, ", res[i]);
//    }
//    printf("%d>", res[n - 1]);
//
//    return 0;
//}
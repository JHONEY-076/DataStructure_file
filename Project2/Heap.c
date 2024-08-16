#include <stdio.h>
#include<stdlib.h> //malloc, free

typedef struct heap
{
	int* arr; //힙 메모리의 주소 저장
	int size; //저장된 원소의 개수
	int capacity; //힙(배열)의 최대 용량

}Heap;

void createHeap(Heap* pHp, int count)
{
	pHp->arr = (int*)malloc(sizeof(int) * count);
	pHp->size = 0;
	pHp->capacity = count;
}

void shiftup(int* arr, int childIdx)
{
	int temp;
	int parentIdx = (childIdx - 1) / 2;
	if (parentIdx>=0 &&arr[parentIdx] < arr[childIdx]) {
		temp = arr[parentIdx];
		arr[parentIdx] = arr[childIdx];
		arr[childIdx] = temp;

		shiftup(arr, parentIdx);
	}
}


void addHeap(Heap* pHp, int value)
{
	if (pHp->capacity == pHp->size)
	{
		printf("메모리가 꽉 차 더이상 저장할 수없습니다.\n");
		return;
	}
	pHp->arr[pHp->size] = value;
	shiftup(pHp->arr, pHp->size);//shift up - 자식노드 입장에서 부모 노드와 비교
	pHp->size++;
}

void displayHeap(Heap* pHp)
{
	int i;
	printf("Heap display: ");
	for (i = 0; i < pHp->size; i++) 
		printf("%d ", pHp->arr[i]);
	puts("");

}

void shiftDown(int* arr, int parentIdx, int size)
{
	int leftIdx = 2 * parentIdx + 1;
	int rightIdx = leftIdx + 1;
	int largeIdx = - 1; //배열의 인덱스로 쓸수 없는 값(0~size -1)
	int temp;

	if(leftIdx<size)
	largeIdx = leftIdx;

	if (rightIdx<size && arr[largeIdx] < arr[rightIdx]) 
		largeIdx = rightIdx;
	
	if (largeIdx !=-1 && arr[largeIdx] > arr[parentIdx]) {

		//두개의 값을 교환
		temp = arr[largeIdx];
		arr[largeIdx] = arr[parentIdx];
		arr[parentIdx] = temp;

		shiftDown(arr, largeIdx, size); //재귀호출
	}


}



int extractMax(Heap* pHp)
{
	int maxValue = pHp->arr[0];
	pHp->arr[0] = pHp->arr[pHp->size-1];
	pHp->size--;

	shiftDown(pHp->arr,0,pHp->size);

	return maxValue; // 최댓값 리턴
}

int main()
{
	Heap heap; //구조체 변수 선언
	int max;
	createHeap(&heap,10);
	
	addHeap(&heap, 57);
	addHeap(&heap, 32);
	addHeap(&heap, 48);
	addHeap(&heap, 10);
	addHeap(&heap, 15);
	addHeap(&heap, 25);
	addHeap(&heap, 20);
	addHeap(&heap, 9);
	addHeap(&heap, 60);

	displayHeap(&heap);

	max=extractMax(&heap);
	printf("최댓값: %d\n", max);

	max = extractMax(&heap);
	printf("최댓값: %d\n", max);

	max = extractMax(&heap);
	printf("최댓값: %d\n", max);


	displayHeap(&heap);


	return 0;


}
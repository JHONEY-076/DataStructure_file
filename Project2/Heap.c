#include <stdio.h>
#include<stdlib.h> //malloc, free

typedef struct heap
{
	int* arr; //�� �޸��� �ּ� ����
	int size; //����� ������ ����
	int capacity; //��(�迭)�� �ִ� �뷮

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
		printf("�޸𸮰� �� �� ���̻� ������ �������ϴ�.\n");
		return;
	}
	pHp->arr[pHp->size] = value;
	shiftup(pHp->arr, pHp->size);//shift up - �ڽĳ�� ���忡�� �θ� ���� ��
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
	int largeIdx = - 1; //�迭�� �ε����� ���� ���� ��(0~size -1)
	int temp;

	if(leftIdx<size)
	largeIdx = leftIdx;

	if (rightIdx<size && arr[largeIdx] < arr[rightIdx]) 
		largeIdx = rightIdx;
	
	if (largeIdx !=-1 && arr[largeIdx] > arr[parentIdx]) {

		//�ΰ��� ���� ��ȯ
		temp = arr[largeIdx];
		arr[largeIdx] = arr[parentIdx];
		arr[parentIdx] = temp;

		shiftDown(arr, largeIdx, size); //���ȣ��
	}


}



int extractMax(Heap* pHp)
{
	int maxValue = pHp->arr[0];
	pHp->arr[0] = pHp->arr[pHp->size-1];
	pHp->size--;

	shiftDown(pHp->arr,0,pHp->size);

	return maxValue; // �ִ� ����
}

int main()
{
	Heap heap; //����ü ���� ����
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
	printf("�ִ�: %d\n", max);

	max = extractMax(&heap);
	printf("�ִ�: %d\n", max);

	max = extractMax(&heap);
	printf("�ִ�: %d\n", max);


	displayHeap(&heap);


	return 0;


}
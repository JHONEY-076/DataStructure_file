//#include<stdio.h>
//#include <stdlib.h>
//
//void display(int* arr, int size)
//{
//	int i;
//	printf("Heap display: ");
//	for (i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//		
//	}
//}
//
//void shiftDown(int* arr, int parentIdx, int size)
//{
//	int leftIdx = 2 * parentIdx + 1;
//	int rightIdx=leftIdx+1;
//	int largeIdx = parentIdx;
//	int temp;
//
//	if (leftIdx<size && arr[leftIdx] > arr[largeIdx])
//		largeIdx = leftIdx;
//
//	if (rightIdx<size && arr[rightIdx] > arr[largeIdx])
//		largeIdx = rightIdx;
//
//	if (largeIdx != parentIdx)
//	{
//		temp = arr[largeIdx];
//		arr[largeIdx] = arr[parentIdx];
//		arr[parentIdx] = temp;    
//		shiftDown(arr, largeIdx, size); 
//	}
//
//
//
//}
//
//
//void heapify(int* arr, int size)
//{
//	int i;
//	//O(logN)
//	for (i = size/2-1; i >= 0; i--) {  // 부모의 인덱스 
//
//		shiftDown(arr, i, size); //shiftDown: 부모 노드의 값을 자식 노드의 값과 비교
//
//	}
//
//
//
//}
//
//int main()
//{
//	int arr[10] = {6, 4, 8, 2, 5, 7, 9, 1, 3, 10 };
//
//
//	printf("\nOriginal array: ");
//	display(arr, 10);
//
//	heapify(arr, 10);
//
//
//	printf("\nHeapify array:");
//	display(arr, 10);
//	return 0;
//
//
//}
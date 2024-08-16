//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma warning(disable:4996)
//
//#define ARR_SIZE 10
//
//void display(int* arr, int size);
//void heapSort(int* arr, int size);
//void shiftDown(int* arr, int parentIdx, int size);
//
//void display(int* arr, int size)
//{
//	int i;
//	for (i = 0; i < size; i++)
//		printf("%d  ", arr[i]);
//	puts("");
//
//
//}
//
//void heapSort(int* arr, int size) //O(NlogN)
//{
//	int i;
//	int j;
//	int temp;
//
//	//�迭�� max heap���� ���� -> heapify
//	for (i = size / 2 - 1; i >= 0; i--)  //parentIdx 
//	{
//		shiftDown(arr, i, size);//shiftDown : �θ� ��忡�� �ڽĳ���� ���� ��
//	}
//
//	//N��ŭ �ݸ��ϸ鼭 shiftDown
//	for (i = size-1; i > 0; i--) { //O(N)
//		temp = arr[0];
//		arr[0] = arr[i];
//		arr[i] = temp;
//		shiftDown(arr, 0, i); //O(logN)
//
//	}
//
//
//
//}
//
//
//
//
//void shiftDown(int* arr, int parentIdx, int size)
//{
//	int leftIdx = 2 * parentIdx + 1;
//	int rightIdx = leftIdx + 1;
//	int largeIdx = -1;
//	int temp;
//
//	if (leftIdx < size)
//		largeIdx = leftIdx;
//
//	if (rightIdx < size && arr[largeIdx] < arr[rightIdx])
//		largeIdx = rightIdx;
//
//	if (largeIdx!=-1 && arr[largeIdx] > arr[parentIdx])
//	{
//		temp = arr[largeIdx];
//		arr[largeIdx] = arr[parentIdx];
//		arr[parentIdx] = temp;
//		shiftDown(arr, largeIdx, size);  // largeIdx�� �ε����� �Ʒ� �ڽ� ����� �ٽ� ���ϵ��� ���ȣ�� ���ش�.
//										// ���� ���Ͽ� �ƹ��� ���ǿ� �������� �ʴ´ٸ� �ٽ� heapSort�� ���ư���.
//
//	}
//
//
//}
//
//
//
//int main()
//{
//	int arr[ARR_SIZE] = { 6,4,8,2,5,10,9,1,3,7 };
//
//	printf("original array :");
//	display(arr, ARR_SIZE);
//
//	heapSort(arr, ARR_SIZE);
//	printf("sorted array : ");
//	display(arr, ARR_SIZE);
//	return 0;
//
//}
//

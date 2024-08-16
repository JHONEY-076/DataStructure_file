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
//	//배열을 max heap으로 변경 -> heapify
//	for (i = size / 2 - 1; i >= 0; i--)  //parentIdx 
//	{
//		shiftDown(arr, i, size);//shiftDown : 부모 노드에서 자식노드의 값을 비교
//	}
//
//	//N만큼 반목하면서 shiftDown
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
//		shiftDown(arr, largeIdx, size);  // largeIdx의 인덱스를 아래 자식 노드들과 다시 비교하도록 재귀호출 해준다.
//										// 만약 비교하여 아무런 조건에 성립되지 않는다면 다시 heapSort로 돌아간다.
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

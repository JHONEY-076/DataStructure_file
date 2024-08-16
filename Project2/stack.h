#pragma once //��������� �ߺ� ���� ����

#include <stdio.h>
#include <stdlib.h>

#pragma warning (disable : 4996)

typedef struct stack
{
	//int data[5];
	int* data; //�������� �Ҵ�� �޸��� �ּҸ� �����ϴ� ������(8����Ʈ)
	int top; //����� �����
	int capacity; //�Ҵ� �� �޸��� �ִ� ũ��
}stack;

void createStack(stack* stk, int size);
void push(stack* stk, int value);
int pop(stack* stk);
void stackPrint(stack* stk);
void stackClear(stack* stk);
int isStackFull(stack* stk);
int isStackEmpty(stack* stk);

void createStack(stack* stk, int size)
{
	stk->data = (int*)malloc(sizeof(int) * size);
	stk->top = -1;
	stk->capacity = size;
}

void push(stack* stk, int value)
{
	//if (stk->top == stk->capacity - 1) //���̻� ������ �� ���� ����
	if (isStackFull(stk))
	{
		//printf("\n\n\t\tstack overflow\n");
		//return;

		//�޸� ������ ������ ��� 2�� ����
		stk->capacity *= 2;
		//�� �޸��� �ּ� = realloc(���� �޸��� �ּ�, �Ҵ��� �޸��� ũ��);
		stk->data = (int*)realloc(stk->data, sizeof(int) * stk->capacity);
		//printf("\n\n\t\t�޸𸮸� 2�� Ȯ���߽��ϴ�.\n");			
	}

	stk->data[++stk->top] = value;
}

int pop(stack* stk)
{
	//if (stk->top == -1)//���̻� ������ �� ���� ���
	if (isStackEmpty(stk))
	{
		return -1; //underflow 
	}

	//���� �����Ǵ� ���� �ƴ� ������ ������.
	//���ҵ� top�� ��ġ�� ���ο� ���� push�Ǹ� ���� �������� ������ �̷�����.
	return stk->data[stk->top--]; //������ �� ����
}

void stackPrint(stack* stk)
{
	int i;

	system("cls");
	printf("stack display(LIFO : Last In First Out) : ");
	for (i = stk->top; i >= 0; i--)
		printf("%d ", stk->data[i]);
	puts("");
}

void stackClear(stack* stk)
{
	//�������� ������ �ƴϴ�.(���� �����ʹ� ������� �ʴ´�.)
	//�������� ���� �� ��ó�� �ڵ带 ����!!!
	stk->top = -1;
}

int isStackFull(stack* stk)
{
	//if (stk->top == stk->capacity - 1) //������ ���� á�ٸ�??
	//	return 1;
	//else
	//	return 0;

	return stk->top == stk->capacity - 1; //������ ����
}

int isStackEmpty(stack* stk)
{
	//if (stk->top == -1) //������ ��� �ִٸ�??
	//	return 1;
	//else 
	//	return 0;

	return stk->top == -1;
}
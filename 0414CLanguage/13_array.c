#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRSIZE 5

int get2()
{
	return 2;
}

void Array(); // ����(Prototype) ctrl + . --> ���� �����

void test();

void randomNumber();

int main()
{
	int floor[80]; // ��ȣ �� : index
	float farr[3]; // 0���� ����, ���ӵ� �޸𸮿� �Ҵ�
	double darr[5];

	int arr[3]; // �ʱ�ȭ �ʿ�
	int arr1[3] = { 0 }; // ��� 0���� �ʱ�ȭ
	int arr2[5] = { 1,2,3 }; // ������ : 0���� �ʱ�ȭ
	int arr3[ARRSIZE];	// define �� ���� ��� ����
	int arr4[] = { 1,2,3 }; // �ڵ����� 3��¥�� �迭�� ��

	char arr5[5] = { 'A','B','C' };
	int a = 1;
	printf("%c, %c, %c\n", arr5[0], arr5[a], arr5[get2()]); // ��������, �Լ��� index�� ��� ����

	//printf("%d", arr5[5]);
	// arr5[5] = 10;  �Ʒ� ������, ���� �����Ⱚ�� ����

	int arr6[3] = { 0,1,2 }; // �ּ�Ȯ��
	printf("%d, %d, %d\n", arr6[0], arr6[a], arr6[get2()]);
	printf("%p, %p, %p\n", &arr6[0], &arr6[a], &arr6[get2()]); // �ּ�

	printf("%d\n", sizeof(arr6)); // ũ��
	printf("%d\n", sizeof(arr6) / sizeof(int)); // ���Һ�ũ��

	int size = sizeof(arr6) / sizeof(int);

	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr6[i]);
	}

	printf("\n");

	Array();

	printf("\n\n");

	randomNumber();

	return 0;
}

void Array()
{
	//TODO --> ���� / �۾���Ͽ��� Ȯ�� ����
	int arr[5];
	// arr[5] = { 1,2,3,4,5 }; --> �Ұ���
	for (int i = 0; i < 5; i++)
	{
		arr[i] = 2 * i;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void test()
{
}

void randomNumber()
{
	srand((unsigned int)time(NULL));
	rand();

	int number[10] = { 0 };

	for (int i = 0; i < 10; i++)
	{
		number[i] = rand() % 10 + 1;

		for (int j = 0; j < i; j++) // �ߺ� ���ִ� ����
		{
			if (number[i] == number[j])
			{
				i--;
				break;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", number[i]);
	}
}
/*
	homework
	�ζ� ���α׷� ���� 6��, ���ʽ� (1 ~ 45)
	1�� : 6�� ��� ��ġ
	2�� : 5�� + ���ʽ�
	3�� : 5��
	4�� : 4��
	5�� : 3��

	���ھ߱����� ���� 3�� (1 ~ 9)

	������ ���� - 52�� ī��((1 ~ 13) * 4)
	������ ������ ī��ȿ� ������ ī�尡 �����ȿ� �ִ��� �ܷ�� ����
	���þ� : 1000�� ���۱� : 5����
	�̱�� ���þ� ȸ��
	���� ���þ� ����
	ī�尡 ���� �����Ǹ� ����, ����� ī�带 �ٽ� ����� �� ����(17��)
*/
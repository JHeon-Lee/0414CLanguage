#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRSIZE 5

int get2()
{
	return 2;
}

void Array(); // 선언(Prototype) ctrl + . --> 정의 만들기

void test();

void randomNumber();

int main()
{
	int floor[80]; // 괄호 안 : index
	float farr[3]; // 0부터 시작, 연속된 메모리에 할당
	double darr[5];

	int arr[3]; // 초기화 필요
	int arr1[3] = { 0 }; // 모두 0으로 초기화
	int arr2[5] = { 1,2,3 }; // 나머지 : 0으로 초기화
	int arr3[ARRSIZE];	// define 된 값도 사용 가능
	int arr4[] = { 1,2,3 }; // 자동으로 3개짜리 배열이 됨

	char arr5[5] = { 'A','B','C' };
	int a = 1;
	printf("%c, %c, %c\n", arr5[0], arr5[a], arr5[get2()]); // 지역변수, 함수도 index로 사용 가능

	//printf("%d", arr5[5]);
	// arr5[5] = 10;  아래 오류뜸, 위는 쓰레기값이 나옴

	int arr6[3] = { 0,1,2 }; // 주소확인
	printf("%d, %d, %d\n", arr6[0], arr6[a], arr6[get2()]);
	printf("%p, %p, %p\n", &arr6[0], &arr6[a], &arr6[get2()]); // 주소

	printf("%d\n", sizeof(arr6)); // 크기
	printf("%d\n", sizeof(arr6) / sizeof(int)); // 원소별크기

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
	//TODO --> 보기 / 작업목록에서 확인 가능
	int arr[5];
	// arr[5] = { 1,2,3,4,5 }; --> 불가능
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

		for (int j = 0; j < i; j++) // 중복 없애는 과정
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
	로또 프로그램 숫자 6개, 보너스 (1 ~ 45)
	1등 : 6개 모두 일치
	2등 : 5개 + 보너스
	3등 : 5개
	4등 : 4개
	5등 : 3개

	숫자야구게임 숫자 3개 (1 ~ 9)

	월남뽕 게임 - 52장 카드((1 ~ 13) * 4)
	랜덤한 두장의 카드안에 숨겨진 카드가 범위안에 있는지 겨루는 게임
	베팅액 : 1000원 시작금 : 5만원
	이기면 베팅액 회수
	지면 베팅액 소진
	카드가 전부 소진되면 종료, 사용한 카드를 다시 사용할 수 없음(17번)
*/
#include <stdio.h>

#define ROWS 5
#define COLS 3

int arrOne[10];
int arrTwo[3][5]; // --> 2託据 壕伸
float arrThree[3][3][3]; // --> 3託据 壕伸

/*
	type name[row][column];

	int arr[3][5];

	  0 1 2 3 4
	0 けけけけけ
	1 けけけけけ
	2 けけけけけ
*/

int arr1[2][3] = { 1,2,3,4,5,6 };
// 1 2 3
// 4 5 6
int arr2[2][3] = { {1,2,3},{4,5,6} };
int arr3[2][3] = { 1,2,3 }; // --> 1託据引 原濁亜走稽 蟹袴走澗 0 段奄鉢
int arr4[][3] = { 1,2,3 }; // --> 1楳 3伸促軒 壕伸稽 喫 舘, 伸精 持繰 災亜管
int arr5[][3] = { {1,2},{3,4,5},{6} }; // --> 3楳 3伸稽 幻級嬢走壱 朔 採歳精 0生稽 段奄鉢喫

void printArr();
void floor();
void printScore();
void board();

int main()
{
	printArr();

	int arr7[4][2];

	printf("壕伸 穿端 郊戚闘 滴奄 : %d\n", sizeof(arr7));
	printf("壕伸 1楳 郊戚闘 滴奄 : %d\n", sizeof(arr7[0])); // arr7[0] --> 1楳
	printf("壕伸税 据社 鯵呪 : %d\n", sizeof(arr7) / sizeof(int));
	printf("壕伸税 楳税 鯵呪 : %d\n", sizeof(arr7) / sizeof(arr7[0]));
	printf("壕伸税 伸税 鯵呪 : %d\n\n", sizeof(arr7[0]) / sizeof(arr7[0][0])); // sizeof(arr7[0] / sizeof(int)

	floor();

	printScore();

	board();

	return 0;
}

//pragma region 紫遂
#pragma region print array
void printArr()
{
	//arr1
	printf("***** arr1 *****\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	//arr2
	printf("***** arr2 *****\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	//arr3
	printf("***** arr3 *****\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr3[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	//arr4
	printf("***** arr4 *****\n");
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr4[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	//arr5
	printf("***** arr5 *****\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr5[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
#pragma endregion

void floor()
{
	int floor[3][3];
	int floor1[3] = { 0 };
	int total = 0;

	for (int i = 0; i < 3; i++)
	{
		printf("*** %d寵 ***\n\n", i + 1);
		for (int j = 0; j < 3; j++)
		{
			printf("%d寵 %d硲 昔姥呪 : ", i + 1, j + 1);
			scanf_s("%d", &floor[i][j]);
		}
		for (int j = 0; j < 3; j++)
		{
			floor1[i] += floor[i][j];
		}
	}
	printf("\n");

	for (int i = 0; i < 3; i++)
	{
		printf("%d寵 昔姥呪 : %d\n", i + 1, floor1[i]);
	}

	printf("\n");

	for (int i = 0; i < 3; i++)
	{
		total += floor1[i];
	}
	printf("恥 昔姥呪 : %d\n", total);
}

void printScore()
{
	int score[ROWS][COLS] = { {90,90,90}, {80,85,90}, {100,95,90}, {85,80,75}, {60,65,70} };
	int totalKor = 0, totalEng = 0, totalMath = 0;
	int koravg = 0, engavg = 0, mathavg = 0;

	for (int i = 0; i < ROWS; i++)
	{
		totalKor += score[i][0];
		totalEng += score[i][1];
		totalMath += score[i][2];
	}
	printf("\n厩嬢恥繊\t慎嬢恥繊\t呪俳恥繊\t\n");
	printf("%d\t\t%d\t\t%d\t\n\n", totalKor, totalEng, totalMath);

	koravg = totalKor / ROWS;
	engavg = totalEng / ROWS;
	mathavg = totalMath / ROWS;

	printf("\n厩嬢汝液\t慎嬢汝液\t呪俳汝液\t\n");
	printf("%d\t\t%d\t\t%d\t\n\n", koravg, engavg, mathavg);

	int student[5] = { 0 };

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			student[i] += score[i][j];
		}
		printf("%d腰属 俳持税 恥繊 : %d\n", i + 1, student[i]);
	}
	printf("\n");
}

void board()
{
	int board[5][5];

	for (int x = 0; x < 5; x++)
	{
		for (int y = 0; y < 5; y++)
		{
			board[x][y] = y * 5 + x;
		}
	}

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			printf("%d\t", board[x][y]);
		}
		printf("\n");
	}
	
	printf("\n\n\n\n");

	for (int x = 0; x < 5; x++)
	{
		for (int y = 0; y < 5; y++)
		{
			printf("%d\t", board[x][y]);
		}
		printf("\n");
	}
}

// 獄鷺 舛慶, 識澱 舛慶 homework
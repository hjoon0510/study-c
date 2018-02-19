#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[1000] = { 0, }, data[1000] = { 0, }, rank[1000] = { 0, };
	int n, temp = 0, sum = 0;
	int i, j;
	scanf("%d", &n);

	// 데이타를 입력받는다. 
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		data[i] = arr[i]; /// 3 3 1 6 2
	}

	// 버블정렬을 이용한다. 
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1]) //내림차순 정렬: 버블정렬
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp; // 6 3 3 2 1 
			}
		}
	}

	// rank 배열에 올바른 순위를 기록한다. 
	for (j = 0; j < n; j++)
	{
		if (j != 0 && (arr[j - 1] == arr[j]))
			rank[j] = rank[j - 1];
		else
			rank[j] = j + 1; // 1 2 2 3 4 
	}



	// 정답을 출력한다. 
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (data[i] == arr[j]) // 원래의 데이타값과 동일한 값이 발견되면 그 값의 순위(rank)을 출력한다. 
			{
				printf("%d ", rank[j]);
				break;
			}
		}
	}
#if 0

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++) // data: 2 2 1 3 6 , arr: 6 3 2 2 1
		{
			if (data[i] == arr[j])//순위출력
			{
				printf("%d ", j + 1);
				break;
			}
		}
	}
#endif
	return 0;
}


//http://codingfun.net/?mid=viewProblem&pid=00ne2&type=n&pageNo=1&base=&key=
#define _CRT_SECURE_NO_WARNINGS
#define count 1000
#include<stdio.h>
int main()

{
	int num = 0, i = 0, j = 0, switch_value[count] = { 0, }, student = 0, students[count] = { 0, }, get_value[count] = { 0, };
	//int num = 0, i = 0, j = 0, switch_value[1000] , student = 0, students[1000], get_value[1000];
	scanf("%d", &num);//스위치개수 입력 8

	for (i = 1; i <= num; i++)
	{
		scanf("%d", &switch_value[i]);//스위치상태 입력 0 1 0 1 0 0 0 1
	}
	scanf("%d", &student);//학생수입력	
	for (i = 1; i <= student; i++)
	{
		scanf("%d %d", &students[i], &get_value[i]);//학생성별, 위치번호

		if (students[i] == 1)
		{
			for (j = get_value[i]; j <= num; j = j + get_value[i])//학생이 남자라면
			{
				switch_value[j] = switch_value[j] ^ 1;// 비트연산자 xor(^)이용
			}
		}

		if (students[i] == 2)//학생이 여자라면
		{
			for (j = 1; j <= num; j++)
			{
				if (get_value[i] + (j - 1) > num )
				{
					break;
				}
				else if (get_value[i] - (j - 1) < 1)
				{
					break;
				}
				//printf("debug : %d %d \n", switch_value[get_value[i] - (j - 1)], get_value[i] - (j - 1));
				if (switch_value[get_value[i] - (j - 1)] == switch_value[get_value[i] + (j - 1)])
				{

					if (switch_value[get_value[i] + (j - 1)] == 0)//스위치가0이면1로
					{
						switch_value[get_value[i] - (j - 1)] = 1;
						switch_value[get_value[i] + (j - 1)] = 1;
					}
					
					else
					{
						switch_value[get_value[i] - (j - 1)] = 0;
						switch_value[get_value[i] + (j - 1)] = 0;
					};

				}
				else {
					break;
				}

			}

		}
	}


	for (i = 1; i <= num; i++)
	{
		printf("%d ", switch_value[i]);
		if (i % 20 == 0)
		{
			printf("\n");
		}
	}

	return 0;

}

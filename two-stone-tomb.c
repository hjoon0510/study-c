#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()

{
	int T, tc;
	int x, y;
	int winner;

	scanf("%d", &tc);

	for (T = 1; T <= tc; T++)

	{

		//winner == 0 앨리스가 이김, 1 밥이 이김
		winner = 0;
		scanf("%d %d", &x, &y);
		//항상 y가 x보다 같거나 크게
		if (x > y)
		{
			int tmp = x;
			x = y;
			y = tmp;
		}
		//case 1: 한 쪽 돌 무더기 갯수가 1일때
		if (x == 1)
		{
			if ((y & 1) == 1) winner = 1;
			else winner = 0;
		}
		//case 2: 돌 많은 쪽 무더기가 홀수일 때 
		else if ((y & 1) == 1)// 홀수는 2진수로나타내면 맨 뒷자리수가 1인걸 이용한 문장이다 예) 3의 2진수 : 0000 0011, 9의 2진수 : 0000 1001
		{
			winner = 0;
		}
		//case 3: 돌 많은 쪽 무더기가 홀수 * 2일 때
		else if (((y / 2) & 1) == 1)
		{
			if (x == 2) winner = 1;
			else winner = 0;
		}
		//case 4: 돌 많은 쪽 무더기가 짝수 * 2일 때
		else
		{
			if (x == 3) {
				if (y == 4) winner = 0;
				else winner = 1;
			}
			else {
				if (x == 4 && y == 4) winner = 1;
				else winner = 0;
			}

		}
		if (winner) printf("#%d B\n", T);
		else printf("#%d A\n", T);

	}

	return 0;

}

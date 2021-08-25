#include <stdio.h>
#include <stdlib.h>


int main()
{
	int T, h, w, n;  //손님수, 호텔층, 층 객실수, n번째 도착한 손님
	int maxh = 0, maxw = 0;
	//
	scanf("%d", &T);
	for (int i = 0; i < T; i++) 
	{
		scanf("%d %d %d", &h, &w, &n);
		
		maxh = h; //최대층
		maxw = w; //최대 호수

		w = 1;	//행을 1로 고정하고 시작
		h = 1;	//열을 1로 고정하고 시작
		
		for (int j = 1; j < n; j++)
		{
			if (n <= maxh*maxw) //투숙객이 방 수에 맞을때
			{
				if (h != maxh)	//층이 최고층 보다 낮으면
					h++;		//호수는 늘지 않고 층만 늠
				else			//층이 최고층보다 높아졌을때
					w++, h = 1;	//호수를 늘리고 층은 다시 1층부터
			}

			else //만약 투숙객이 방보다 많다면.
			{
				fprintf(stderr, "Error! 손님이 방보다 많습니다\n");
				break;
			}	
			
		}
		printf("%d%02d", h, w);
	}



	return 0;
}
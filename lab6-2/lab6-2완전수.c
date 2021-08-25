#include <stdio.h>

void main()
{
	int n , i, sum=0;
	int *divisors, k;

	for (n = 2; n <= 10000; n++)
	{
		sum = 0;
		k = 0;
		divisors = (int*)malloc(n / 2 * sizeof(int));
		// n/2만큼의 메모리를 할당

		for (i = 1; i <= n / 2; i++)
		{
			
			if (n % i == 0) {//약수이면
				sum += i; //약수로 확인되는 i 마다 malloc으로 배열 할당, 저장
				divisors[k] = i;
				k++;
			}
		}
		
		if (sum == n) 
		{
			printf("%d = 완전수 : ", n);

			for (i = 0; i < k; i++) 
			{
				printf(" %d +", divisors[i]);
			}
			printf("\b\b  ");
			printf("\n");
			free(divisors);//할당한 메모리들 되돌리기
		}
			
	}

}
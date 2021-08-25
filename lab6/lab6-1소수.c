#include <stdio.h>

int isPrime(int n) // 솟수 검사 함수, 솟수이면 1 아니면 0을 return
{
	int i;
	for (i = 2; i <= n / 2; i++)
		if (n % i == 0)//약수가 존재한다는 뜻
			return 0;
	//for문 빠져나오면
	return 1;
}

void main() // 2 ~ 100 소수 찾아서 출력하고 더하기
{
	int i, sum = 0;

	for (i = 2; i <= 100; i++) 
	{
		if (isPrime(i))
		{
			sum += i;
			printf("%d ", i);
		}
		// Isprime()을 이용해서 솟수이면 출력하고 sum 에 더한다.
	}

	printf("\n");
	printf("sum=%d\n", sum);
}
#include <stdio.h>

int isPrime(int n) // �ڼ� �˻� �Լ�, �ڼ��̸� 1 �ƴϸ� 0�� return
{
	int i;
	for (i = 2; i <= n / 2; i++)
		if (n % i == 0)//����� �����Ѵٴ� ��
			return 0;
	//for�� ����������
	return 1;
}

void main() // 2 ~ 100 �Ҽ� ã�Ƽ� ����ϰ� ���ϱ�
{
	int i, sum = 0;

	for (i = 2; i <= 100; i++) 
	{
		if (isPrime(i))
		{
			sum += i;
			printf("%d ", i);
		}
		// Isprime()�� �̿��ؼ� �ڼ��̸� ����ϰ� sum �� ���Ѵ�.
	}

	printf("\n");
	printf("sum=%d\n", sum);
}
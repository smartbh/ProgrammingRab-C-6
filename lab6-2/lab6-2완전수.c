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
		// n/2��ŭ�� �޸𸮸� �Ҵ�

		for (i = 1; i <= n / 2; i++)
		{
			
			if (n % i == 0) {//����̸�
				sum += i; //����� Ȯ�εǴ� i ���� malloc���� �迭 �Ҵ�, ����
				divisors[k] = i;
				k++;
			}
		}
		
		if (sum == n) 
		{
			printf("%d = ������ : ", n);

			for (i = 0; i < k; i++) 
			{
				printf(" %d +", divisors[i]);
			}
			printf("\b\b  ");
			printf("\n");
			free(divisors);//�Ҵ��� �޸𸮵� �ǵ�����
		}
			
	}

}
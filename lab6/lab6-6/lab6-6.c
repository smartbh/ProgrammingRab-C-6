#include <stdio.h>

void main()
{
	int n_test,n_data,i,j,k,num;
	int *data;
	int findMax = 0, findMin = 1000;
	int sum = 0;

	scanf("%d", &n_test);

	for (i = 0; i < n_test; i++)
	{
		int findMax = 0, findMin = 1000;
		int sum = 0;

		scanf("%d", &n_data);
		data = (int*)malloc(n_data *sizeof(int)); //data�迭 �޸� n_test ��ŭ �Ҵ�

		for (j = 0; j < n_data; j++)
		{
			scanf("%d", &num);
			data[j] = num;	//�迭�� �μ� �Է�
		}

		for (k = 0; k < n_data; k++)	//���� ���
		{
			sum += data[k];
		}
		printf("%d ", sum);

		for (int k = 0; k < n_data; k++)	//�ִ밪 ã�� �ݺ���
		{
			if (data[k] > findMax)
				findMax = data[k];
		}

		printf("%d ", findMax); //�ִ밪 ���

		for (int k = 0; k < n_data; k++)	//�ּڰ� ã�� �ݺ���
		{
			if (data[k] < findMin)
				findMin = data[k];
		}

		printf("%d ", findMin); // �ּڰ� ���

		printf("\n\n");

		free(data);
	}
		


}
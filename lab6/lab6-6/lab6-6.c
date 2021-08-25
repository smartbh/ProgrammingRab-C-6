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
		data = (int*)malloc(n_data *sizeof(int)); //data배열 메모리 n_test 만큼 할당

		for (j = 0; j < n_data; j++)
		{
			scanf("%d", &num);
			data[j] = num;	//배열에 인수 입력
		}

		for (k = 0; k < n_data; k++)	//총점 출력
		{
			sum += data[k];
		}
		printf("%d ", sum);

		for (int k = 0; k < n_data; k++)	//최대값 찾는 반복문
		{
			if (data[k] > findMax)
				findMax = data[k];
		}

		printf("%d ", findMax); //최대값 출력

		for (int k = 0; k < n_data; k++)	//최솟값 찾는 반복문
		{
			if (data[k] < findMin)
				findMin = data[k];
		}

		printf("%d ", findMin); // 최솟값 출력

		printf("\n\n");

		free(data);
	}
		


}
#include <stdio.h>
#include <math.h>

double myexp(double x)
{
	int i;
	double term, sum, oldsum;
	oldsum = 0.0;
	sum = 1.0;
	term = 1.0;


	for (i = 1; (sum - oldsum) > 0.0000001; i++)
	{
		term *= x / (double)i;
		oldsum = sum;
		sum += term;
	}

	
	// (sum – oldsum) > 0.0000001 일 때 까지
	// i를 증가시키면서
	// term =  을 구한다.
	// oldsum = sum 으로 기억하고
	// sum = sum + term 으로 누적 값을 구한다.
	return sum;
}

void main()
{
	int i,j;
	printf("  exp() : ");
	for (i = 1; i <= 5; i++)
		printf("%lf ", exp((double)i));  //
	printf("\n");

	printf("myexp() : ");
	for (j = 1; j <= 5; j++)
		printf("%lf ", myexp((double)j));
	printf("\n");
}

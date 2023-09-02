#include <stdio.h>
#include <stdlib.h>

double function(double x){
	return (1/(1+(x)));
}

int main(){
	int upperbound, lowerbound;
	printf("Enter the Upperbound of the limit: ");
	scanf("%d", &upperbound);

	printf("Enter the lowerbound of the limit: ");
	scanf("%d", &lowerbound);

	double h;
	printf("Enter the interval: ");
	scanf("%lf", &h);

	int n = ((upperbound-lowerbound)/h)+1;

	double* y = (double*)malloc(n*sizeof(double));

	double j = (double)lowerbound;

	printf("X: ");
	for (int i = 0; i < n; ++i)
	{
		printf("%lf ", j);
		y[i] = function(j);
		j += h;
	}
	printf("\n");

	printf("Y: ");
	for (int i = 0; i < n; ++i)
	{
		printf("%lf ", y[i]);
	}
	printf("\n");

	double val;
	for (int i = 1; i < n-1; ++i)
	{
		val += y[i];
	}

	val = (y[n-1]+y[0]+(2*val))*(h/2);

	printf("Answer: %lf\n", val);
}
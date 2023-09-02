#include <stdio.h>
#include <stdlib.h>

double function(double x){
	return (1/((1+x)*(1+x)));
}

int main()
{
	int upperbound, lowerbound;
	printf("Enter the upperbound of the limit: ");
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

	double s1, s2;

	for(int i=1; i<n-1; i++){
		if(i%2==0){
			s1 += y[i];
		}
		else if(i%2!=0){
			s2 += y[i];
		}
	}
	double val = (y[n-1]+y[0]+(4*s2)+(2*s1))*(h/3);

	printf("Answer: %lf\n", val);

}

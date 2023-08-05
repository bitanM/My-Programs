#include <stdio.h>
#include <math.h>

double x0, x1, x2, f1, f2, f0;

double func(double x){
	return ((x*x)-(4*x)-10);
}

double mid(double x1, double x2){
	f1 = func(x1);
	f2 = func(x2);

	x0 = ((f2*x1) - (f1*x2))/(f2 - f1);

	return x0;
}

double secant(double x1, double x2){
	f1 = func(x1);
	f2 = func(x2);

	x0 = mid(x1, x2);

	while(fabs(func(x0)) >= 1e-4){
		x1 = x2;
		f1 = f2;

		x2 = x0;
		f2 = func(x0);

		x0 = mid(x1, x2);
	}
	return x0;
}

int main(){
	x2, x1;
	printf("Enter the value of x1: ");
	scanf("%lf", &x1);

	printf("Enter the value of x2: ");
	scanf("%lf", &x2);

	double root = secant(x1, x2);
	printf("The root is approximately: %.6f\n", root);
	return 0;
}
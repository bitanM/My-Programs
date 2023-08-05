#include <stdio.h>
#include <math.h>

double function(double val){
	return ((val*val*val)-val-3);
}

double bisection(double x1, double x2){
	double x0 = (x1+x2)/2;
	while(fabs(function(x0)) >= 1e-4){
		if(function(x0)*function(x1)<0){
			x2 = x0;
		}
		else{
			x1 = x0;
		}
		x0 = (x1+x2)/2;
	}
	return x0;
}

int main(){
	double x2, x1;
	printf("Enter the value of x1: ");
	scanf("%lf", &x1);

	printf("Enter the value of x2: ");
	scanf("%lf", &x2);

	double root = bisection(x1, x2);
	printf("The root is approximately: %.4f\n", root);
	return 0;
}

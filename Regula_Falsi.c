#include <stdio.h>
#include <math.h>

double function(double val){
	return ((3*val*val)+(6*val)-45);
}

double mid(double x1, double x2){
	double f_x1 = function(x1);
	double f_x2 = function(x2);

	double x0 = x1 - ((f_x1)*(x2-x1)/(f_x2-f_x1));

	return x0;
}

double regula(double x1, double x2){

	double x0 = mid(x1, x2);

	while(fabs(function(x0)) >= 1e-6){
		if(function(x0)*function(x1)>0){
			x1 = x0;
		}
		else{
			x2 = x0;
		}
		x0 = mid(x1, x2);
	}
	return x0;
}

int main(){
	double x2, x1;
	printf("Enter the value of x1: ");
	scanf("%lf", &x1);

	printf("Enter the value of x2: ");
	scanf("%lf", &x2);

	double root = regula(x1, x2);
	printf("The root is approximately: %.6f\n", root);
	return 0;
}

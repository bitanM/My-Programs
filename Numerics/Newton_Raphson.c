# include<stdio.h>
# include<math.h>

double function(double val){
	return ((val*val)-3*(val)+2);
}

double derivFunc(double val){
	return ((2*val)-3);
}

double newton_raphson(double x0){
	double f0 = function(x0);
	double d0 = derivFunc(x0);

	double x1 = x0 - (f0/d0);

	if(fabs((x1-x0)/x1)>1e-6){
		x0 = x1;
		newton_raphson(x0);
	}
	else{
		return x0;
	}
}

int main(){
	double x0;
	printf("Enter the value of x0: ");
	scanf("%lf", &x0);

	double root = newton_raphson(x0);
	printf("The root is approximately: %.6f\n", root);
	return 0;
}
#include<stdio.h>

double Add(double a, double b)
{
	//double result = a + b;
	return a+b;
}

main()
{
	double x = 3;
	double y = 5;
	double z = Add(x, y);
	printf("%f+%f=%f", x, y, z);
}
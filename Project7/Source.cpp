#include <stdio.h> 
#define PI 3.14159//constant value for PI used for finding area
int main() 
{
	double  r;
	scanf_s("%lf", &r);//taking input
	if (r >= 0)
	{
		printf("%lf", PI * r * r);//giving output
	}
	else
	{
		printf("Error!");
	}
}

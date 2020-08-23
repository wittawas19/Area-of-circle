#include <stdio.h> 
#define PI 3.14159
int main() 
{
	double  r;
	scanf_s("%lf", &r);
	if (r >= 0)
	{
		printf("%lf", PI * r * r);
	}
	else
	{
		printf("Error!");
	}
}
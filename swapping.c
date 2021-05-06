//swapping of 2 numbers without using a temp variable

#include <stdio.h>
int main()
{
	int a=10;
	int b=20;
	printf("value of a= %d and b= %d before swapping",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n value of a= %d and b= %d after swapping:",a,b);
}

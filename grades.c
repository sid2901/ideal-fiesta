#include <stdio.h>
int main()
{ int a=0;
	printf("enter student's marks:");
	scanf("%d",&a);
	if(a<40)
	{
		printf("GRADE F");
		
	}
	else if (40<=a && a<=54)
	{
		printf("GRADE D");
	}
	else if (55<=a && a<=69)
	{
		printf("GRADE C");
		
	}
	else if(70<=a && a<=84)
	{
		printf("GRADE B");
	}
	else if(85<a && a<100)
	{
		printf("GRADE A");
	}
	else
	{
		printf("wrong input!!");
	}
}

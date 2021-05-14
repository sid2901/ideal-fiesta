	#include <stdio.h>
	#include<stdlib.h>
	int main()
	{
		int n ;
		printf("enter any number between 1 to 5:");
		scanf("%d",&n);
		if(n==1)
		{
			printf("pasta '\n'135");
		}
		else if (n==2)
		{
			printf("pizza ' \n '235 ");
		}
		else if (n==3)
		{
			printf("burger'\n '325");
		}
		else if (n==4)
		{
			printf("biryani' \n ' 500");
		}
		else if(n==5)
		{
			printf("french fries' \n '95");
		}
		else
		{
			printf("wrong input");
		}
	return 0;
	}

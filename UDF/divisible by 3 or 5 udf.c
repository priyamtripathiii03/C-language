#include<stdio.h>

void check()
{
	int n,a;
	printf("Enter the value of n :");
	scanf("%d",&n);
	if(n%3==0)
	{
		printf("this number is divisible by 3");
	}
	else if(n%5==0)
	{
		printf("this number is divisible by 5");
	}
	else
	{
		printf(" this number is not divisible by 3 or 5 !");
	}
	
}
main()
{
	check();
}

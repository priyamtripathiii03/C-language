#include<stdio.h>

main()
{
	int a,b,c;
	printf("Enter the value of a :");
	scanf("%d",&a);
	printf("Enter the value of b :");
	scanf("%d",&b);
	printf("Enter the value of b :");
	scanf("%d",&c);
	
	
	if(a>b && a>c)
	{
		printf("a is max");
	}
	else if (b>c && b>a)
	{
		printf("b is max");
	}
	else
	{
		printf("c is max");
	}
	
}

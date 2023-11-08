// Write C program to check a number is even or odd using ternary operator.
#include<stdio.h>

main()
{
	int x;
	printf("enter the value:");
	scanf("%d",&x);
	
	(x%2==0)?printf("value is even"):printf("value is odd");
}

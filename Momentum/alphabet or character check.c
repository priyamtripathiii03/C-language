//Write C program to input any character and check whether it is alphabet digit or special character
#include<stdio.h>

main()
{
	char b;
	printf("enter any character:");
	scanf("%c",&b);
	
	if(b>='A' && b<='Z'||b>='a' && b<='z')
	{
		printf("%c:is alphabet",b);
	}
	else if(b>=49 && b<=57)
	{
		printf("%c:is digit",b);
	}
	else
	{
		printf("%c:is special character",b);
	}
}


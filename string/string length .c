#include<stdio.h>
#include<string.h>
main()
{
	char name[30];
	int length =0;
	
	printf("Enter your name : ");
	gets(name);
	
	length= strlen(name);
	
	
	printf("length = %d",length);
}
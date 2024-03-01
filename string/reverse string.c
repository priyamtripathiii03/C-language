#include<stdio.h>
#include<string.h>
main()
{	
	
	
	int i,n,j;
	char name[30],reverse[30];
	printf("Enter your name : ");
	gets(name);
	
	n = strlen(name);

	
	for(i=0,j=n-1; i<n,j>=0; i++,j--)
	{
		reverse[i] = name[j];
	}
	
	puts(reverse);


		
	
	
	
		
}
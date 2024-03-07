#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	printf("Enter the string value of a :");
	gets(a);
	char b[100];
	printf("Enter the string value of b : ");
	gets(b);
	int length=strlen(a);
	int i,j,check=0;
	for(i=0;i<=length;i++)
	{
		check=0;
		for(j=0;j<length;j++)
		{
			if(a[i]==b[i])
			{
				check=1;
			}
		}
	}
	if(check==1)
	{
		printf("two strings are same");
		
	}
	else
	{
		printf("two strings are not same");
		
	}
	
	
}

#include<stdio.h>

main()
{
	int x=1;
	int n;
	printf("Enter the value which you want to skip : ");
	scanf("%d",&n);
	
	for(x=1;x<=n;x++)
	{
	
		if(x==n)
		{
			continue;
		}	printf(" %d",x );
	}	
	
	
	
	
	
	
	
	
}


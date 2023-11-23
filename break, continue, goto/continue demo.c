#include<stdio.h>

main()
{
	int x=1;
	int y;
	printf("Enter the value which you want skip : ");
	scanf("%d",&y);
	
	for(x=1;x<=10;x++)
	{
	
		if(x==y)
		{
			continue;
		}	printf(" %d",x );
	}	
	
	
	
	
	
	
	
	
}

#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;
	for(j=2; j<=6; j++)
	{
		for(i=2; i<=j; i++)
		{
			printf("%d ",i%2);
		}
	printf("\n");
	}
}


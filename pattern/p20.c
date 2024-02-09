#include<stdio.h>


main()
{
	int i,j,k;
	for(j=1; j<=5; j++)
	{
		for(i=j; i>=1; i--)
		{
			if(i%2)
			{
				printf("-");
			}
			else
			{
				printf("|");
			}
		}
		printf("\n");
	}
}


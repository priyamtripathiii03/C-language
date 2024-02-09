#include<stdio.h>


main()
{
	int i,j,k=1;
	for(j=1; j<=5; j++)
	{
		for(i=j; i>=1; i--)
		{
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
}


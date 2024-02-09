#include<stdio.h>


main()
{
	char i,j,k='A';
	for(j=1; j<=5;j++)
	{
		for(i=j; i>=1; i--)
		{
			printf("%c ",k);
			k++;
		}
		printf("\n");
	}
}


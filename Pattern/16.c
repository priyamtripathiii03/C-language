#include<stdio.h>

main()
{
    int i,j,k=1;
	
	for(i=1; i<=5; i++)
	{
		for(j=5; j>=i; j--)
		{
			printf("%d",k%2);
			k++;
		}
		printf("\n");
	}
}

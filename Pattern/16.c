#include<stdio.h>

main()
{
    int i,j,k=1;
	
	for(i=5; i>=1; i--)
	{
		for(j=i; j>=1; j--)
		{
			printf("%d",j%2);
	     }
	     printf("\n");
    }
}

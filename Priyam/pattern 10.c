#include<stdio.h>

int main()
{
	//112131
    //122232
    //132333
    //142434
    //152535
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("%d%d",j,i);
		}
		printf("\n");
	}
}
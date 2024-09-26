#include<stdio.h>

int main ()
{
	//01010
    //10101
    //01010
    //10101
    //01010
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d",(i+j)%2);
		}
		printf("\n");
	}
}
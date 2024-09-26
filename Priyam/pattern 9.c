#include<stdio.h>

int main()
{
	//12345
    //246810
    //3691215
    //48121620
    //510152025
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d",i*j);
		}
		printf("\n");
	}
}
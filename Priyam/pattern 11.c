#include<stdio.h>

int main()
{
	//111213
    //212223
    //313233
    //414243
    //515253
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("%d%d",i,j);
		}
		printf("\n");
	}
}
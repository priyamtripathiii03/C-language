#include<stdio.h>

int main()
{
	//246810
    //1214161820
    //2224262830
    //3234363840
    //4244464850
	int i,j,k=2;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d",k);
			k+=2;
		}
		printf("\n");
	}
}
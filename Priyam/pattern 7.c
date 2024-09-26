#include<stdio.h>

int main()
{
	//13579
    //1113151719
    //2123252729
    //3133353739
    //4143454749
	int i,j,k=1;
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
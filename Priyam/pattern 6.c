#include<stdio.h>

int main()
{
	//12345
    //678910
    //1112131415
    //1617181920
    //2122232425
	int i,j,k=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d",k);
			k++;
		}
		printf("\n");
	}
}
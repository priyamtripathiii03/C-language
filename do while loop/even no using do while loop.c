#include<stdio.h>


main()
{
	
	int a=1;
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
	do
	{
		if(n%2==0)
		{
		
		printf("%d\t",n);
	}
		n--;
		
	}while(n>=a);
}


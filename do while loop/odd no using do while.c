#include<stdio.h>


main()
{
	
	int a=1;
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    do
	{
		if(a%2==1)
		{
		
		printf("%d\t",a);
	}
		a++;
		
	}while(a<=n);
}


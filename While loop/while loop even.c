#include<stdio.h>
#include<conio.h>

main()
{
	
	int a=1;
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
	while(n>=a)
	{
		if(n%2==0)
		{
		
		printf("%d\t",n);
	}
		n--;
		
	}
}


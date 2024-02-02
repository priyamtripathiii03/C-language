#include<stdio.h>
#include<conio.h>

main()
{
	
	int a=1;
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
	while(a<=n)
	{
		if(a%2==1)
		{
		
		printf("%d\t",a);
	}
		a++;
		
	}
}


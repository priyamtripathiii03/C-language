#include<stdio.h>
#include<conio.h>

main()
{
	
	int a=1;
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
	
	do
	{
		printf("%d\t",n);
		n--;
	}
	while(n>=a);
}

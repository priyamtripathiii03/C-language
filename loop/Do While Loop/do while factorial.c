#include<stdio.h>
#include<conio.h>

main()
{
	int a=1;
    int n;
    int sum=1;
    printf("enter the number :");
    scanf("%d",&n);
    
	do
	{
		sum=sum*a;
		a++;
		printf("%d",sum);
	}
	while(a<=n);
}


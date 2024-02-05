#include<stdio.h>


main()
{
	int a=1;
    int n;
    int sum=0;
    printf("enter the number :");
    scanf("%d",&n);
    
	do
	{
		sum=sum+a;
		a++;
	}
	while(a<=n);
	printf("%d",sum);
		
	
}


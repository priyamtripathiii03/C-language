#include<stdio.h>
#include<conio.h>

main()
{
	int a=1;
    int n;
    int sum=0;
    printf("enter the number :");
    scanf("%d",&n);
    
	while(a<=n)
	{
		sum=sum+a;
		a++;
	}
	printf("%d",sum);
		
	
}


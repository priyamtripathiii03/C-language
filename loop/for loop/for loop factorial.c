#include<stdio.h>
#include<conio.h>

main()
{
	int a;
    int n;
    int sum=1;
    printf("enter the number :");
    scanf("%d",&n);
    
	for(a=1;a<=n;a++)
	{
		sum=sum*a;
		
	}
	printf("%d",sum);
		
	
}

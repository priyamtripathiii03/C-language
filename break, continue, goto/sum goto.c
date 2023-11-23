#include<stdio.h>
#include<conio.h>

main()
{
	int x=1;
    int n;
    int sum=0;
    printf("enter the number :");
    scanf("%d",&n);
    
    start:
    
	sum=sum+x;
	
	x++;
	if(x<=n)
	{
	
		goto start;
		
	}
	printf("%d",sum);
		
	
}


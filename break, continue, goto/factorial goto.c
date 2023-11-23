#include<stdio.h>
#include<conio.h>

main()
{
	int x=1;
    int n;
    int fac=1;
    printf("enter the number :");
    scanf("%d",&n);
    
    start:
    
	fac=fac*x;
	
	x++;
	if(x<=n)
	{
	
		goto start;
		
	}
	printf("%d",fac);
		
	
}


#include<stdio.h>
#include<conio.h>

main()
{
	
    int a=2000;
    int b=3000;
    printf("enter the leap year :");
    scanf("%d",&a);
    
	while(a<=b)
	{
		if(a%4==0)
		{
		printf("%d\t",a);
	}
		a++;
		
	}
}

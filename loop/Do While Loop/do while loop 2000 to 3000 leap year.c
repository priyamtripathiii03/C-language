#include<stdio.h>
#include<conio.h>

main()
{
	
    int a=2000;
    int b=3000;
    printf("enter the leap year :");
    scanf("%d",&a);
    
	do
	{
		if(a%4==0)
		{
		printf("%d\t",a);
	}
		a++;
		
	}
		while(a<=b);
}

#include<stdio.h>
#include<conio.h>

main()
{
	
    int a;
    int b=3000;
    printf("enter the leap year :");
    scanf("%d",&a);
    
	for(a;a<=b;a++)
	{
		if(a%4==0)
		{
		printf("%d\t",a);
	}
		
	}
}

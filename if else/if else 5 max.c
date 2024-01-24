#include<stdio.h>

main()
{
	int a,b,c,d,e;
	printf("Enter the value of a :");
	scanf("%d",&a);
	printf("Enter the value of b :");
	scanf("%d",&b);
	printf("Enter the value of c :");
	scanf("%d",&c);
	printf("Enter the value of d :");
	scanf("%d",&d);
	printf("Enter the value of e :");
	scanf("%d",&e);
	
	
	if(a>b && a>c && a>d && a>e)
    	{
		printf("a is max");
     	}
	else if (b>c && b>a && b>d && b>e)
	     {
		printf("b is max");
         	}
	else if (c>a && c>b && c>d && c>e) 
          	{
		printf("c is max");
	          }
	else if(d>a && d>b && d>c && d>e)
             	{
             		printf("d is max");
     		
	              }
	else 
	{
		printf("e is max");
	}
	
}

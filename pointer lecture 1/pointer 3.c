#include<stdio.h>
main()
{
	int x;
	printf("Enter the value of x :");
	scanf("%d",&x);
	int y;
	printf("Enter the value of y :");
	scanf("%d",&y);

	int *a=&x;
	int *b=&y;

	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;

	printf("x is :%d\n",x);
	printf("y is :%d",y);
}

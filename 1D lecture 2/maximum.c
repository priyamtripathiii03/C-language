#include<stdio.h>
main()
{
	int n;
	
	printf("enter the array size:",n);
	scanf("%d",&n);
	int a[n];
	
	int i,max=0;
	
	for(i=0;i<n;i++)
	{
		printf("enter the array element a[%d]:",i);
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}		
	}
	printf(" maximum : %d ",max);
}

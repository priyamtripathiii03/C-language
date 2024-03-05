#include<stdio.h>
main()
{
	int n,i,j,target;
	int a[n];
	printf("enter the array a size:",n);
	scanf("%d",&n);
	printf("enter the target value:",target);
	scanf("%d",&target);
	
	for(i=0;i<n;i++)
	{
		printf("enter the array element a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(target==a[i]+a[j])
			{
				printf("pair of index(%d,%d)\n",i,j);
				printf("pair of value(%d+%d)\n",a[i],a[j]);
			}		
    	}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

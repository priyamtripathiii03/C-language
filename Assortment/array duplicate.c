#include<stdio.h>
main()
{
	int n,i,j,count=0;
	int a[n];
	printf("enter the array size:",n);
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the array element a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				a[i]='\0';
				count++;
			}		
    	}
	}
	if(a[i]!='\0')
	{
		printf("%d",a[i]);
	}
	printf("total duplicate value:%d",count);
	
}

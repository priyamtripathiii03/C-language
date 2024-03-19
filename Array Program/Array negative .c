#include<stdio.h>
main()
{

	int n;
	printf("Enter the value :");
	scanf("%d",&n);
	
	int a[n];
	int i;
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] :",i);
		scanf("%d",&a[i]);
	}
	int x;
	for(i=0; i<n; i++)
	{
		if(a[i]%2==1)
		{
			x=a[i];
			printf("%d ",x);
		}	
		
	}

}

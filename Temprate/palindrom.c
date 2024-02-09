#include<stdio.h>
 main()
{
	int n,r,org,p=0;
	
	printf("n : ");
	scanf("%d",&n);
	
	org = n;
	
	while(n>0)
	{
		r = n % 10;
		p = r + (p*10);
		n = n / 10;
	}
	
	if(p == org)
	{
		printf("Yes, It is a palindrom number");
	}
	else
	{
		printf("No, It is not a palindrom number");
	}
}


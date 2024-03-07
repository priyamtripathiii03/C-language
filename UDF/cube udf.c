#include<stdio.h>

void cube()
{
	int n,store;
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	store=n*n*n;
	printf("cube is :%d",store);
	return ;
}
main()
{
	cube();
}

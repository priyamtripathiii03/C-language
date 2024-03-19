#include<stdio.h>
main()
{

   int a,b;
   printf("Enter the value of a,b :");
   scanf("%d%d",&a,&b);
   
   int *c=&a;
   int *d=&b;
   if(*c>*d)
   {
   	printf("max is a",*c);
   }
   else
   {
   	printf("max is b",*d);
   }
}

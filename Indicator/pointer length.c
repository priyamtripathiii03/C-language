#include<stdio.h>
#include<string.h>
main()
{


        char name[100];
        printf("Enter your name :");
        gets(name);
        int x=0;
		int i;
		for(i=0; name[i]!='\0'; i++)
		{
			x++;
		}
        int *k=&x;
        printf("%d ",*k);
        
		
		
	
}

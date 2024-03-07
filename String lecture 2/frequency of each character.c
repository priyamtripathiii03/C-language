#include<stdio.h>
#include<string.h>
main()
{ 
   char name[100];
   printf("Enter the string value :  ");
   gets(name);
   int length=strlen(name);
   int i,j,k=1;
   for(i=0;i<length;i++)
    { 
       for(j=i+1;j<length;j++)
       {
       	  if(name[i]==name[j])
       	  {
       	  	k++;
       	  	name[j]=0 ;
			 }
		
	   }
	   	 if(name[i]!=0)
			 {
			 	printf("%C -> %d \n ",name[i],k);
			 }
			 k=1;
   
   }
 
  
	
}

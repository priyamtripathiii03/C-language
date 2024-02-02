#include<stdio.h>

main()
{
	char ans;
	int mark = 0;
	printf("Who is our prime minister of India ?\n");
	printf("a. Rahul Gandhi \n");
	printf("b. Akhlesh Yadev \n");
	printf("c. Narendra Modi \n");
	printf("d. Soniya Gandhi \n");
	scanf(" %c",&ans);
	
	
	switch (ans)
	{
	
	
	case 'A' :printf("Wrong Answer !\n");break;
	case 'B' : printf("Wrong Answer !\n");break;
	case 'C' : printf("Right Answer !\n");
	mark= mark + 1;
			
	
			printf("What is our National Game of India ?\n");
			printf("a. Hockey \n");
	        printf("b. Cricket \n");
	        printf("c. Valley ball \n");
	        printf("d. Chess \n");
	        scanf(" %c",&ans);
	        
	        
	        switch (ans)
	        {
	        	case 'A' : printf("Right Answer !");
	        mark= mark + 1;
	        
	        
	        printf("What is our national language of India ?\n ");
	        printf("a. Hindi \n");
	        printf("b. Gujarati \n");
	        printf("c. Marathi \n");
	        printf("d. English \n");
	        scanf(" %c",&ans);
	        
	        switch (ans)
	        {
	        	case 'A' : printf("Right Answer !\n");
	        	mark= mark + 1;
	        
	        	
	        	printf("What is our National flower of India ?\n ");
	        	printf("a. Sunflower \n");
	            printf("b. Lily \n");
	            printf("c. Rose \n");
	            printf("d. Lotus\n");
	            scanf(" %c",&ans);
	        
	        switch (ans)
	        {
	        	case 'A': printf("Wrong Answer !\n");break;
	        	case 'B': printf("Wrong Answer !\n");break;
	        	case 'C': printf("Wrong Answer !\n");break;
	        	case 'D': printf("Right Answer !\n");
				mark = mark + 1;
			
	
				printf("What is our National Fruit of India ?\n ");
				printf("a. Mango \n");
	            printf("b. Apple \n");
	            printf("c. Papaya \n");
	            printf("d. Orange\n");
	            scanf(" %c",&ans);
	            
	            switch (ans)
	            {
	            	case 'A': printf("Right Answer !\n");
					mark = mark + 1;break;
	            	case 'B': printf("Wrong Answer !\n");break;
	            	case 'C': printf("Wrong Answer !\n");break;
	            	case 'D': printf("Wrong Answer !\n");break;
	            	
				}
	            break;
	            
				
				
			}
	        	
	        	
				break;
	        	case 'B' : printf("Wrong Answer !\n");break;
	        	case 'C' : printf("Wrong Answer !\n");break;
	        	case 'D' : printf("Wrong Answer !\n");break;
			}
			}
	        
	        
	        
	        break;
	    
	        case 'D' : printf("Wrong Answer !\n");break;
	        
				
					default : printf("Enter the valid value ");
						
	}
				printf("Total mark = %d/5",mark);
}

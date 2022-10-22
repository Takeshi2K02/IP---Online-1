#include <stdio.h>

int main ()

{
	int Number_of_children=0;
	float Total_Amount=0.0;
	char insurance_type, Package, next_item;
	
	do
	{
	printf("Insurance Type : ");
	scanf("%s", &insurance_type);
	//The program did not run as expected when I use "%*c%c". Therefore, here I toke string input.
	//If you want you can use "%c" also, but sometimes it can be cause to errors.
	
	if(insurance_type=='A' || insurance_type=='a')
	{
		printf("Family or Individual ( F- family and I - individual) : ");
		scanf("%s", &Package);
		//The program did not run as expected when I use "%*c%c". Therefore, here I toke string input.
		//If you want you can use "%c" also, but sometimes it can be cause to errors.
		
		if(Package=='F' || Package=='f')
		{
			printf("Number of children : ");
			scanf("%d", &Number_of_children);
			
			if(Number_of_children>2)
			{
				Total_Amount = 5200.0 + (5200.0 * (10.0/100.0) * ((float)Number_of_children - 2.0));
			}
			
			else
			{
				Total_Amount = 5200.0;
			}
		}
		
		if(Package=='I' || Package=='i')
		{
			Total_Amount = 4500.0;
			printf("Total Amount : %.2f\n\n", Total_Amount);
		}
	}
	
	else if(insurance_type=='N' || insurance_type=='n')
	{
		printf("Family or Individual ( F- family and I - individual) : ");
		scanf("%s", &Package);
		//The program did not run as expected when I use "%*c%c". Therefore, here I toke string input.
		//If you want you can use "%c" also, but sometimes it can be cause to errors.
		
		if(Package=='F' || Package=='f')
		{
			printf("Number of children : ");
			scanf("%d", &Number_of_children);
			
			if(Number_of_children>2)
			{
				Total_Amount = 4300.0 + (4300.0 * (10.0/100.0) * ((float)Number_of_children - 2.0));
			}
			
			else
			{
				Total_Amount = 4300.0;
			}
		}
		
		if(Package=='I' || Package=='i')
		{
			Total_Amount = 3100.0;
		}
		
		printf("Total Amount : %.2f\n\n", Total_Amount);
	}
	
	else if(insurance_type=='D' || insurance_type=='d')
	{
		printf("Family or Individual ( F- family and I - individual) : ");
		scanf("%s", &Package);
		//The program did not run as expected when I use "%*c%c". Therefore, here I toke string input.
		//If you want you can use "%c" also, but sometimes it can be cause to errors.
		
		if(Package=='F' || Package=='f')
		{
			printf("Number of children : ");
			scanf("%d", &Number_of_children);
			
			if(Number_of_children>2)
			{
				Total_Amount = 4800.0 + (4800.0 * (10.0/100.0) * ((float)Number_of_children - 2.0));
			}
			
			else
			{
				Total_Amount = 4800.0;
			}
		}
		
		if(Package=='I' || Package=='i')
		{
			Total_Amount = 3600.0;
		}
		
		printf("Total Amount : %.2f\n\n", Total_Amount);
	}
	
	else if(insurance_type=='S' || insurance_type=='s')
	{
		printf("Family or Individual ( F- family and I - individual) : ");
		scanf("%s", &Package);
		//The program did not run as expected when I use "%*c%c". Therefore, here I toke string input.
		//If you want you can use "%c" also, but sometimes it can be cause to errors.
		
		if(Package=='F' || Package=='f')
		{
			printf("Number of children : ");
			scanf("%d", &Number_of_children);
			
			if(Number_of_children>2)
			{
				Total_Amount = 3800.0 + (3800.0 * (10.0/100.0) * ((float)Number_of_children - 2.0));
			}
			
			else
			{
				Total_Amount = 3800.0;
			}
		}
		
		if(Package=='I' || Package=='i')
		{
			Total_Amount = 3300.0;
		}
		
		printf("Total Amount : %.2f\n\n", Total_Amount);
	}
	
	else
	{
		printf("Invalid Insurance Type !\n\n");
		break;
	}
	
		printf("Do you want to continue  ( Y - yes or N - no) : ");
		scanf("%*c%c", &next_item);
	}while(next_item=='Y' || next_item=='y');
		
	return 0;	
}

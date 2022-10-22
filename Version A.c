#include <stdio.h>

int main ()

{
	int Type_of_room, No_of_days;
	float Discount, Amount;
	char Accommodation_Basis, Reward_Card_Type;
	
	while(Type_of_room!=-1){
		
		printf("Enter type of room : ");
		scanf("%d", &Type_of_room);
		
		if(Type_of_room==1)
		{
		
			printf("Enter Accommodation Basis (F/H) : ");
			scanf("%*c%c", &Accommodation_Basis);
		
			printf("Enter No of days : ");
			scanf("%d", &No_of_days);
		
			printf("Enter Reward Card Type ( G, S, B ) : ");
			scanf("%*c%c", &Reward_Card_Type);
			
			if(Accommodation_Basis=='F' || Accommodation_Basis=='f')
			{
				if(Reward_Card_Type=='G' || Reward_Card_Type=='g')
				{
					Amount = (25555.00 * No_of_days) - (25555.00 * No_of_days * (12.5/100.0));		
				}
				
				if(Reward_Card_Type=='S' || Reward_Card_Type=='s')
				{
					Amount = (25555.00 * No_of_days) - (25555.00 * No_of_days * (11.5/100.0));		
				}
				
				if(Reward_Card_Type=='B' || Reward_Card_Type=='b')
				{
					Amount = (25555.00 * No_of_days) - (25555.00 * No_of_days * (9.5/100.0));	
				}
			}
			
			if(Accommodation_Basis=='H' || Accommodation_Basis=='h')
			{
				if(Reward_Card_Type=='G' || Reward_Card_Type=='g')
				{
					Amount = (17250.00 * No_of_days) - (17250.00 * No_of_days * (12.5/100.0));
				}
				
				if(Reward_Card_Type=='S' || Reward_Card_Type=='s')
				{
					Amount = (17250.00 * No_of_days) - (17250.00 * No_of_days * (11.5/100.0));		
				}
				
				if(Reward_Card_Type=='B' || Reward_Card_Type=='b')
				{
					Amount = (17250.00 * No_of_days) - (17250.00 * No_of_days * (9.5/100.0));		
				}
			}
			
			printf("Amount(Rs.) : %.2f\n\n", Amount);
		
	}
	
	
	
	
	else if(Type_of_room==2)
	{

			printf("Enter Accommodation Basis (F/H) : ");
			scanf("%*c%c", &Accommodation_Basis);
		
			printf("Enter No of days : ");
			scanf("%d", &No_of_days);
		
			printf("Enter Reward Card Type ( G, S, B ) : ");
			scanf("%*c%c", &Reward_Card_Type);
			
			if(Accommodation_Basis=='F' || Accommodation_Basis=='f')
			{
				if(Reward_Card_Type=='G' || Reward_Card_Type=='g')
				{
					Amount = (17500.00 * No_of_days) - (17500.00 * No_of_days * (12.5/100.0));	
				}
				
				if(Reward_Card_Type=='S' || Reward_Card_Type=='s')
				{
					Amount = (17500.00 * No_of_days) - (17500.00 * No_of_days * (11.5/100.0));
				}
				
				if(Reward_Card_Type=='B' || Reward_Card_Type=='b')
				{
					Amount = (17500.00 * No_of_days) - (17500.00 * No_of_days * (9.5/100.0));	
				}
			}
			
			if(Accommodation_Basis=='H' || Accommodation_Basis=='h')
			{
				if(Reward_Card_Type=='G' || Reward_Card_Type=='g')
				{
					Amount = (12250.00 * No_of_days) - (12250.00 * No_of_days * (12.5/100.0));	
				}
				
				if(Reward_Card_Type=='S' || Reward_Card_Type=='s')
				{
					Amount = (12250.00 * No_of_days) - (12250.00 * No_of_days * (11.5/100.0));		
				}
				
				if(Reward_Card_Type=='B' || Reward_Card_Type=='b')
				{
					Amount = (12250.00 * No_of_days) - (12250.00 * No_of_days * (9.5/100.0));		
				}
			}
			
			printf("Amount(Rs.) : %.2f\n\n", Amount);
		
	}
	
	else if(Type_of_room==3)
	{
		
		printf("Enter Accommodation Basis (F/H) : ");
		scanf("%*c%c", &Accommodation_Basis);
	
		printf("Enter No of days : ");
		scanf("%d", &No_of_days);
	
		printf("Enter Reward Card Type ( G, S, B ) : ");
		scanf("%*c%c", &Reward_Card_Type);
		
		if(Accommodation_Basis=='F' || Accommodation_Basis=='f')
		{
			if(Reward_Card_Type=='G' || Reward_Card_Type=='g')
			{
				Amount = (9000.00 * No_of_days) - (9000.00 * No_of_days * (12.5/100.0));		
			}
			
			if(Reward_Card_Type=='S' || Reward_Card_Type=='s')
			{
				Amount = (9000.00 * No_of_days) - (9000.00 * No_of_days * (11.5/100.0));	
			}
			
			if(Reward_Card_Type=='B' || Reward_Card_Type=='b')
			{
				Amount = (9000.00 * No_of_days) - (9000.00 * No_of_days * (9.5/100.0));		
			}
		}
		
		if(Accommodation_Basis=='H' || Accommodation_Basis=='h')
		{
			if(Reward_Card_Type=='G' || Reward_Card_Type=='g')
			{
				Amount = (7250.00 * No_of_days) - (7250.00 * No_of_days * (12.5/100.0));	
			}
			
			if(Reward_Card_Type=='S' || Reward_Card_Type=='s')
			{
				Amount = (7250.00 * No_of_days) - (7250.00 * No_of_days * (11.5/100.0));
			}
			
			if(Reward_Card_Type=='B' || Reward_Card_Type=='b')
			{
				Amount = (7250.00 * No_of_days) - (7250.00 * No_of_days * (9.5/100.0));
			}
		}
		
		printf("Amount(Rs.) : %.2f\n\n", Amount);
		
	}
	
	else if(Type_of_room==-1)
	{
		
	}
			
	else
	{
		printf("Invalid Type of room\n\n");
	}
	
	}
			
	return 0;
}

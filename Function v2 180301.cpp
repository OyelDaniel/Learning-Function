#include <stdio.h>
void kiraRC(char);

int main(void)
{
	char roomCode;
	printf("\tROOM CODE		ROOM TYPE		ROOM RATE(RM)\n");
	printf("\t=========     \t\t=========       \t=============\n");
	printf("\tA           \tExecutive        	\t560.00\n");
	printf("\tB           \tSuite            	\t451.60\n");
	printf("\tC           \tDeluxe           	\t334.50\n");
	printf("\tD           \tSuperior          \t\t245.80\n\n");
	
	printf("\tENTER ROOM CODE(A/B/C/D): \n\t",roomCode);
	scanf("%c",&roomCode);
	
	kiraRC(roomCode);
	return 0;
}
	void kiraRC(char rc)
{
	float chaRoom;
	char answer, roomRate, roomType;
	float totalChaRoom = 0;
	int eB;
	answer = 'Y';
	
	if(rc=='A')
	{
		printf("\n\tDO YOU WANT ADD BREAKFAST?: ");
		fflush(stdin);
		scanf("%c",&answer);
		if(answer=='Y')
		{
			printf("\n\tNUMBER OF ADDITIONAL PERSON?: ");
			scanf("%d",&eB);
			chaRoom = (float)(23*eB)+560.00;
			printf("\tRoom Charges :%.2f",chaRoom);
		}
		else
			printf("\nRoom Charges = RM 560.00");
	}
	else if(rc=='B')
	{
		printf("\n\tDO YOU WANT ADD BREAKFAST?: ");
		fflush(stdin);
		scanf("%c",&answer);
		if(answer=='Y')
		{
			printf("\n\tNUMBER OF ADDITIONAL PERSON?: ");
			scanf("%d",&eB);
			chaRoom = (float)(23*eB)+451.60;
			printf("\tRoom Charges :%.2f",chaRoom);
    	}
    	else
    		printf("\nRoom Charges : RM 451.60");
	}
	else if(rc=='C')
	{
		printf("\n\tDO YOU WANT ADD BREAKFAST?: ");
		fflush(stdin);
		scanf("%c",&answer);
		if(answer=='Y')
		{
			printf("\n\tNUMBER OF ADDITIONAL PERSON?: ");
			scanf("%d",&eB);
			chaRoom = (float)(23*eB)+334.50;
			printf("\tRoom Charges :%.2f",chaRoom);
    	}
    	else
    		printf("\nRoom Charges : RM 334.50");
    	
	}
	else if(rc=='D')
	{
		printf("\n\tDO YOU WANT ADD BREAKFAST?: ");
		fflush(stdin);
		scanf("%c",&answer);
		if(answer=='Y')
		{
			printf("\n\tNUMBER OF ADDITIONAL PERSON?: ");
			scanf("%d",&eB);
			chaRoom = (float)(23*eB)+245.80;
			printf("\tRoom Charges :%.2f",chaRoom);
		}
		else
			printf("\nRoom Charges : RM 245.80");
	}
}	

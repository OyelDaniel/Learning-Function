#include<stdio.h>

void getMonthlyFee (int); //function declaration

int main (void)
{
	int nOCh;
	
	printf("\tWELCOME TO SYANG PINTAR KINDERGARTEN AND NURSERY");
	printf("\n\t-------------------------------------------------");
	printf("\n\n\tPackages offered are as follows:");
	printf("\n\n\tPACKAGE 1");
	printf("\n\t=========");
	printf("\n\tKindergarten (8.30a.m-12.30p.m)");
	printf("\n\tMonthly fee : RM 170.00");
	printf("\n\n\tPACKAGE 2");
	printf("\n\t=========");
	printf("\n\tKindergarten and nursery (7.30a.m-3.00p.m)");
	printf("\n\tMonthly fee : RM 320.00 ");
	printf("\n\n\tPACKAGE 3");
	printf("\n\t==========");
	printf("\n\tKindergarten and extended nursery (7.30a.m-6.00p.m)");
	printf("\n\tMonthly fee : RM440.00");
	
	printf("\n\n\n\tHow many child you want to register : ");
	scanf("%d",&nOCh);
	getMonthlyFee (nOCh);
	return 0;
}

void getMonthlyFee (int nOC)
{
	float totFee=0 , fee, pAD; //totFee=total Fee,pAD=price After Discount
	int pkg ,c ; //pkg=pakage,nOC=no of children,c=counter
	
	for ( c=1 ; c<=nOC ; c++ )
	{
		printf("\n\tPlease choose your package (1 or 2 or 3) : ");
		scanf("%d",&pkg);
			
		if (pkg==1)	
		fee=170.00;
		else if (pkg==2)
		fee=320.00;
		else if (pkg==3)	
		fee=440.00;
		else
		printf("\n\tSorry.. WE 're not offered that package");
		
		totFee = totFee + fee;
	}
	if(nOC>1)
	pAD=totFee*90/100.00;
	else
	pAD=totFee;
	
	printf("\n\tYour monthly fee is RM %.2f",pAD);
}

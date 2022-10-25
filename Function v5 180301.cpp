#include <stdio.h>
void kira (int);

int main(void)
{
	int mark, i, sC, tMark = 0;
	float avg;
	
	printf("\t\tSMK CEMERLANG");
	printf("\n\nSubject Code\t\t\tSubject Name");
	printf("\n============\t\t\t============");
	printf("\n     900\t\t\tPengajian Am");
	printf("\n     910\t\t\tBahasa Melayu");
	printf("\n     940\t\t\tSejarah");
	printf("\n     942\t\t\tGeografi");
	printf("\n     950\t\t\tMathematics M");
	printf("\n     958\t\t\tICT");
	printf("\n     960\t\t\tPhysics");
	printf("\n     962\t\t\tChemistry");
	printf("\n     964\t\t\tBiology\n");
	
	for(i = 1;i<5; i++)
	{
		printf("\n\n\t%d.\tEnter Subject Code: ", i);
		scanf("%d",&sC);
		printf("\t\tEnter Marks: ");
		scanf("%d", &mark);
		kira(mark);
		tMark = tMark + mark;
	}
	printf("\n\n\tTotal Marks: %d", tMark);
	avg = tMark / ((float)5 - 1);
	printf("\n\tAverage Mark: %.2f", avg);
	return 0;
}
	void kira(int m)
{
	int tMark=0;
	float avg;
	
	if ((m>=0)&&(m<=29))
			printf("\t\tGrade: D");
	else if ((m>=30)&&(m<=39))
			printf("\t\tGrade: C-");
	else if ((m>=40)&&(m<=49))
			printf("\t\tGrade: C");
	else if ((m>=50)&&(m<=59))
			printf("\t\tGrade: B-");
	else if ((m>=60)&&(m<=69))
			printf("\t\tGrade: B");
	else if ((m>70)&&(m<=79))
			printf("\t\tGrade: A-");
	else if ((m>=80)&&(m<=100))
			printf("\t\tGrade: A");
}

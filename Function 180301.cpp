//muhammad daniel bin darmawi
// 6 atas sukses
// 27 february 2018

#include <stdio.h>
void kiraGredPelajar(int); //declaration

int main()
{
	int markah;
	printf("Masukkan markah anda: ");
	scanf("%d",&markah);
	
	kiraGredPelajar(markah); //call
	return 0;
}
   	void kiraGredPelajar(int m)
{
	if((m<=100)&&(m>=81))					//definition
		printf("Gred anda ialah A");
	else if((m<=80)&&(m>=61))
		printf("Gred anda ialah B");
	else if((m<=60)&&(m>=41))
		printf("Gred anda ialah C");
	else if((m<=40)&&(m>=21))
		printf("Gred anda ialah D");
	else if((m<=20)&&(m>=0))
		printf("Gred anda ialah F");			
}

#include <stdio.h>
#include <conio.h>

int main (){
	
	int sayi1,sayi2;
	int sayi;
	int n;
	char cevap = 'e';

	
	printf("Baslangic sayisi : ");
	scanf("%d",&sayi1);
	
	printf("Bitis sayisi : ");
	scanf("%d",&sayi2);
	
	printf("%d ve %d sayisi arasindaki asal sayilar : ",sayi1,sayi2);
	
	for(sayi=sayi1; sayi<=sayi2; sayi++)
	{
		for(n=2; n<sayi; n++)
		{
			cevap = 'e';
			if(sayi % n == 0)
			{
				cevap = 'h';
				break;
			}	
		}
			
			if(cevap=='e')
			{
				printf("\t%d",sayi);
			
			}
		
	}
	
}

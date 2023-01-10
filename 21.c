#include <stdio.h>

int main(){
	
	int cocuk;
	int cevap1;
	
	printf("Medeni haliniz nedir ? Evli icin 1, Bekar icin 2 : ");
	scanf("%d",&cevap1);
	
	switch(cevap1)
	{
		case 1 :
			printf("Kac cocugunuz var? Yok ise 0 : ");
			scanf("%d",&cocuk);
			if(cocuk>=2)
			{
				printf("Buyuk bir aileniz var.");
			}
			else
			{
				printf("Kucuk bir aileniz var.");
			}
			break;
		case 2 :
			printf("Program bitmistir.");
			break;
	}
		
	
}

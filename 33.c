#include <stdio.h>

int main(){
	
	int sayi;
	int rakam;
	int toplam;
	sayi = 0;
	rakam = 0;
	toplam = 0;
	
	printf("Bir sayi giriniz : ");
	scanf("%d",&sayi);
	
	while(sayi>0)
	{
		rakam = sayi % 10;
		toplam = toplam + rakam;
		sayi = sayi / 10;
		
	}
	
	printf("\nSayidaki rakamlarin toplami : %d",toplam);
	
}

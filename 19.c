#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float sayi1,sayi2;
	float sonuc;
	int secim;
	
	
	printf("1.Sayiyi giriniz : ");
	scanf("%f",&sayi1);
	
	printf("2.Sayiyi giriniz : ");
	scanf("%f",&sayi2);
	
	printf("Toplama icin 1\nCikarma icin 2\nCarpma icin 3\nBolme icin 4\nLutfen numara giriniz : ");
	scanf("%d",&secim);
	
	switch(secim)
	{
		case 1 : 
			sonuc = sayi1 + sayi2;
			printf("Toplam sonuc : %f",sonuc);
			break;
			
		case 2 :
			sonuc = sayi1 - sayi2;
			printf("Cikarma sonuc : %f",sonuc);
			break;
		
		case 3 : 
			sonuc = sayi1 * sayi2;
			printf("Carpma sonuc : %f",sonuc);
			break;
			
		case 4 :
			if(sayi2>0){
				
				sonuc = sayi1 / sayi2;
				printf("Bolme sonucu : %f",sonuc);
				
			}
			else{
			
				printf("Sayi sifira bolunemez.");
				
			}
			break;
			
		default : printf("Hatali islem numarasi.");
		break;
	}
	
	
}

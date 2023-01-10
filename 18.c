#include <stdio.h>

int main (){
	
	int sayi1,sayi2;
	int secim;
	float sonuc;
	
	printf("Ilk sayiyi giriniz : ");
	scanf("%d",&sayi1);
	
	printf("Ikinci sayiyi giriniz : ");
	scanf("%d",&sayi2);
	
	printf("Toplama icin 1\nCikarma icin 2\nCarpma icin 3\nBolme icin 4\n Numara giriniz : ");
	scanf("%d",&secim);
	
	if(secim==1)
	{
		sonuc = sayi1 + sayi2;
		printf("%f",sonuc);
	}
	else if(secim==2){
		sonuc = sayi1 - sayi2;
		printf("%f",sonuc);
	}
	else if(secim==3){
		sonuc = sayi1 * sayi2;
		printf("%f",sonuc);
	}
	else if(secim==4){
		sonuc = sayi1 / sayi2;
		printf("%f",sonuc);
	}
}

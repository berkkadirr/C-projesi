#include <stdio.h>

int main(){
	
	int adet;
	int toplam;
	int n;
	float ortalama;
	toplam = 0;
	ortalama = 0;
	
	printf("Kac adet ogrenci notu girmek istiyorsunuz : ");
	scanf("%d",&adet);
	
	int notlar[adet];
	
	for(n=1; n<=adet; n++)
	{
		printf("\n%d.Ogrencinin notunu giriniz : ",n);
		scanf("%d",&notlar[n]);
	}
	
	for(n=1; n<=adet; n++)
	{
		toplam = toplam + notlar[n];
	}
	
	ortalama = toplam / adet;
	
	printf("Notlarin toplami : %d",toplam);
	printf("\nNot ortalamasi : %f",ortalama);
}

#include <stdio.h>

int main(){
	
	float sayi1,sayi2;
	float sonuc;
	int islem;
	int devammi;
	
	do{
	
	
	printf("Birinci sayiyi girin : ");
	scanf("%f",&sayi1);
	
	printf("Ikinci sayiyi girin : ");
	scanf("%f",&sayi2);
	
	printf("Toplama icin 1\nCikarma icin 2\nCarpma icin 3\nBolme icin 4\nYapmak istediginiz islemin numarasini girin : ");
	scanf("%d",&islem);
	
	if(islem==1)
	{
		sonuc = sayi1 + sayi2;
	}
	else if(islem==2)
	{
		sonuc = sayi1 - sayi2;
	}
	else if(islem==3)
	{
		sonuc = sayi1 * sayi2;
	}
	else if(islem==4)
	{
		if(sayi2==0)
		{
			printf("Sifira bolme yapilamaz.\n");
		}
		else
		{
			sonuc = sayi1 / sayi2;
		}
	}
	else
	{
		printf("%d Gecerli bir islem numarasi degildir.\n",islem);
	}
	
	if(islem==4 && sayi2==0)
	{
		printf("Sonuc : 0 a bolum gerceklestirilemez.Gecerli bir sonuc yok");
	}
	else if(islem>4 || islem<1)
	{
		printf("Sonuc : Gecerli bir islem numarasi girmediginizden dolayi sonuc yok.");
	}
	else if(islem>=1 && islem<=4)
	{
		printf("Sonuc : %f",sonuc);
	}
	
	
	printf("\nBaska islemler yapmaya devam etmek istermisiniz? (Evet = 1 , Hayir = 2): ");
	scanf("%d",&devammi);
	
	if(devammi==2)
	{
		printf("Program sonlandiriliyor.");
	}
	
	}
	
		while(devammi==1);
		
}

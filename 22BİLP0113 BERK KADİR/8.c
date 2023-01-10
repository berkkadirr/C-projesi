#include <stdio.h>

int main (){
	
	int yas,ay,hafta,gun,saat,dakika,saniye;
	
	printf("Yasinizi giriniz : ");
	scanf("%d",&yas);
	
	ay = yas * 12;
	hafta = 12*4*yas;
	gun = 12*4*7*yas;
	saat = 12*4*7*24*yas;
	dakika = 12*4*7*24*60*yas;
	saniye = 12*4*7*24*60*100*yas;
	
	printf("Yasiniz  = %d Ay , %d Hafta , %d Gun , %d Saat , %d Dakika , %d Saniyeye denk gelmektedir.",ay,hafta,gun,saat,dakika,saniye);
	
}

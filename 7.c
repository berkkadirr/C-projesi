#include <stdio.h>

int main(){
	
	float mesafe,variszamani;
	float gerekenhiz;
		
	printf("Gidilecek mesafeyi giriniz : ");
	scanf("%f",&mesafe);
	
	printf("Varis zamanini giriniz : ");
	scanf("%f",&variszamani);
	
	gerekenhiz = mesafe / variszamani;
	
	printf("Gereken hiziniz : %f",gerekenhiz);
	
}

#include <stdio.h>

int main(){
	
	float yaricap;
	float alan;
	float cevre;
	float pi;
	
	pi = 3.14;
	
	printf("Dairenin yaricapini giriniz : ");
	scanf("%f",&yaricap);
	
	cevre = 2 * pi * yaricap;
	alan = pi * yaricap * yaricap;
	
	printf("Dairenin alani : %f",alan);
	printf("\nDairenin cevresi : %f",cevre);
	
	
}

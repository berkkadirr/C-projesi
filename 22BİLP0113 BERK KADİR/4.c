#include <stdio.h>

int main (){
	
	int kenar;
	int alan;
	int cevre;
	
	printf("Karenin bir kenar uzunlugunu giriniz : ");
	scanf("%d",&kenar);
	
	alan = kenar * kenar;
	cevre = kenar * 4;
	
	printf("Karenin Alani : %d",alan);
	printf("\nKarenin Cevresi : %d",cevre);
	
	
	return 0;
}

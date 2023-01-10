#include <stdio.h>

int main (){
	
	 int kenar1;
	 int kenar2;
	 int alan;
	 int cevre;
	 
	 printf("Dikdortgenin ilk kenarini giriniz : ");
	 scanf("%d",&kenar1);
	 printf("Dikdortgenin ikinci kenarini giriniz : ");
	 scanf("%d",&kenar2);
	 
	 alan = kenar1 * kenar2;
	 cevre = kenar1*2 + kenar2*2;
	 
	 printf("Dikdortgenin alani : %d",alan);
	 printf("\nDikdortgenin cevresi : %d",cevre);
	
}

#include <stdio.h>

int main(){
	
	int sayi1,sayi2;
	
	printf("Birinci sayiyi giriniz : ");
	scanf("%d",&sayi1);
	
	printf("Ikinci sayiyi giriniz : ");
	scanf("%d",&sayi2);
	
	if(sayi1<sayi2){
		printf("Ikinci sayi , ilk sayidan buyuk bir sayi.");
	}
	else if(sayi1>sayi2){
		printf("Ilk sayi ikinci sayidan buyuk bir sayi");
	}
}

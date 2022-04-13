#include <stdio.h>

int main(){
	
	int x,sifre;
	
	sifre = 12345;
	
	
	printf("sifreyi giriniz=");
	scanf("%d", &x);
	
	while ( x != sifre ){
		printf("hatali sifre girdiniz.\n");
		scanf("%d",&x);
	}	
	
	printf("tebrikler, giris yapiliyor.");
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

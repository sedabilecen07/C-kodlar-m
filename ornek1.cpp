#include <stdio.h>

int main(){
	
	char cinsiyet;
	double boy;
	
	
	printf("kisinin cinsiyetini giriniz(e/k)=");
	scanf("%c",&cinsiyet);
	
	printf("kisinin boyunu cm cinsinden giriniz=");
	scanf("%lf",&boy);
	
	if  
	
	((cinsiyet == 'e' || cinsiyet == 'E' ) && boy > 160 ){
		printf("tebrikler mulakati gectiniz.");
	}	
	else if
	
	 ((cinsiyet == 'k' || cinsiyet == 'K' ) && boy > 150 ){
		printf("tebrikler mulakati geçtiniz.");
	}
	else 
	
	{
		printf("uzgunum kaldiniz.");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

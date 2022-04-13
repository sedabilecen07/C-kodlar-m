#include <stdio.h>

int main(){
	/* bu kişi 0-100 ---> 10 tl
	100-150---> 9.5 tl
	150-200---> 9.0 tl
	200-250---> 8.5 tl
	250-300---> 8.0 tl
	300-350---> 7.5 tl
	350-400---> 7.0 tl
	400+---> 6.5 tl
	
	*/
	int adet;
	float adetfiyati;
	
	printf("almak istediginiz urun sayisini giriniz=");
	scanf("%d",&adet);
	
	if (adet >= 400){
		adetfiyati = 6.5;
	}
	else if(adet >= 350 && adet < 400){
		adetfiyati = 7.0;
	}
	else if(adet >= 300 && adet < 350){
		adetfiyati = 7.5;
	}
	else if(adet >= 250 && adet < 300){
		adetfiyati = 8.0;
	}
	else if(adet >= 200 && adet < 250){
		adetfiyati = 8.5;
	}
	else if(adet >= 150 && adet < 200){
		adetfiyati = 9.0;
	}	
	else if(adet >= 100 && adet < 150){ 
	 	adetfiyati = 9.5;
	}
	else if(adet >= 0 && adet < 100){ 
		adetfiyati = 10;
	}
	else { 
		printf("daha buyuk deger girniz.");
		
	}
	
	
	
	printf("toplam ödemeniz gereken tutar=%.2f",adet*adetfiyati);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

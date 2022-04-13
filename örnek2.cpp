#include <stdio.h>

int main(){
	
	/*
	
	40-50--->dc
	51-60--->cc
	61-70--->cb
	71-80--->bb
	81-90--->ba
	91-100--->aa
	*/
	
	int v1,v2,f,ort;
	
	printf("v1 notunu giriniz=");
	scanf("%d",&v1);
	
	printf("v2 notunuzu giriniz=");
	scanf("%d",&v2);
	
	printf("f notunuzu giriniz=");
	scanf("%d",&f);
	
	ort= (v1*30 + v2*30 + f*40)/100;
	
	printf("ortalamaniz=%d\n",ort);
	
      	if (ort > 90 && ort <= 100){ 
	
	printf("harf notunuz aa dýr.");
	}
	else if (ort > 80 && ort <= 90){
		printf("harf notunuz ba dir.");
	}
	else if (ort > 70 && ort <= 81){
		printf("harf notunuz bb dir");
	}
	else if (ort > 60 && ort <= 71){
		printf("harf notunuz cb dir.");
	}
	else if (ort > 50 && ort <=61){
		printf("harf notunuz cc dir.");
	}
	else if (ort > 40 && ort <= 51){
		printf("harf notunuz dc dir.");
	}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

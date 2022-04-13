#include <stdio.h>

int main(){
	
	/* 1 den n e kadar olan sayýlarýn yazdýrýlmasý ve toplanmasý
	*/
	
	int a=0,n,t=0;
	
	printf(" kullanici sayi girsin=");
	scanf("%d",&n);
	
	
	while ( n < 0){
		printf("0'dan buyuk sayi giriniz=");
		scanf("%d",&n);
	}
	
	
	
	while ( a < n){
		
		a=a+1;
		t=t+a;
  	printf("%d\n",a);
	    	
	}	
	
  	printf("toplam=%d",t);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

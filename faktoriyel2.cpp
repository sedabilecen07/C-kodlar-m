
#include <stdio.h>

int main(){
	 
	 int a=0,s,f=1;
		
		printf("kullanici sayi girsin=");
		scanf("%d",&s);
	  
	  
	  
	while (s < 0 || s >= 21){
		printf("tekrar sayi giriniz=");
		scanf("%d",&s);
	}
	 
	 
	while (a < s){
	a++;
	f = f*a;	
	printf("%d\n",f);
	}
	  
	
	
	
	
	
	
	
	
	return 0;
}

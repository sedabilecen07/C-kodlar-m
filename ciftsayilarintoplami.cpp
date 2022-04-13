#include <stdio.h>

int main(){
	
	int a=0,s,t=0;
	 
	 
	printf("sayi giriniz=");
	scanf("%d",&s);
	
	
	while (s<0){
		printf("lutfen buyuk sayi giriniz=");
		scanf("%d",&s);
	}
	 
	while (a <= s ){
		
		printf("%d\n",a);
		a=a+2;
		
		t=t+a;
		
		
		
	}
	
	printf("toplam=%d",t);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

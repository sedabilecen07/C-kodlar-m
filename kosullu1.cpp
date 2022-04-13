#include <stdio.h>

int main(){
	 
	int yas;
	
	
	printf("lutfen yasinizi giriniz=");
	scanf("%d",&yas); 
	
	if(yas < 18){
		
		printf("kucuksunuz");
	}
	else if(yas == 18){
		printf("kimligi guvenlige birakmalisin");
		
	}
	else{
		printf("girebilirisiniz");
		
	}
	
	
	
	
	
	
	return 0;
	
}

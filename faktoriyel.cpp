#include <stdio.h>

int main(){
	 
	 int a = 0,s,f=1;
	 
	 printf("kullanici sayiyi girsin=");
	 scanf("%d",&s);
	  
	 while (s<0){
	 	
	 	printf("tekrar sayi giriniz=");
	 	scanf("%d",&s);
	 }   
	    	
	 
	 while( a < s ){
	 	
	 	a++;
	 	f=a*f;
	 	
	 	
	 	
	 	
	 }
	 
	 	printf("faktoriyel=%d",f);
	 	
	 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

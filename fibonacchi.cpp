#include <stdio.h>

int main(){
	
	int s,a = 1,b = 0,c,d ;
	
	printf("kullanici sayi girsin=");
	scanf("%d",&s);
	 
	 while (s < 0 ){
	 
	  printf("tekrar sayi girin=");
	  scanf("%d",&s);
	}
	 
	 printf("%d ",a);
	 
	 
	 while (b < s ){
	 	
	 	b++;
	 	b = c++;
	 	c = d;	 	
	 	printf("%d %d %d",b,c,d);
	 	
	 	
	 }
	
	printf("fibonacchi dizisi=%d",d);
	
	
	
	
	
	
	
	
	return 0;
}
  

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a;
	int b;
	
	
	printf("uzun kenari giriniz=");
	scanf("%d", &a);
	
	printf("kisa kenari giriniz=");
	scanf("%d", &b);
	
	printf("cevre=%d\nalan=%d",(a+b)*2,a*b);
	
	
	return 0;
}

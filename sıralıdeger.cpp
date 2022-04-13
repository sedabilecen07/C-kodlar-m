#include <stdio.h>

int main(){
	
	int a=5 , b, c, d;
	
	b= a++;
	
	c= --b;
	
	d= (b++)+(c--);
	
	printf("b*c*d=%d \na=%d \nb=%d \nc=%d \nd=%d ",b*c*d,a,b,c,d);
	
	
	
	
	return 0;
}

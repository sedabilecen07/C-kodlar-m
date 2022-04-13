#include <stdio.h>


int main(){
	int vize1,vize2,final,ortalama;
	
	printf("vize1 notunu gir=");
	scanf("%d",&vize1);
	
	printf("vize2 notunu gir=");
	scanf("%d",&vize2);
	
	printf("final notu gir=");
	scanf("%d",&final);
	
	ortalama = (vize1*30/100 + vize2*30/100 + final*40/100 );
	
	 printf("ortalama=%d\n",ortalama);
	 
	 
	if (ortalama > 50 ){
		
	 printf("gectiniz.");	
	}
	 else if (ortalama == 50){
	 	
	 	printf("tekrar giriniz");
	 }
	else
	{
		
		printf("kaldiniz.");
	}
	return 0;
	
}

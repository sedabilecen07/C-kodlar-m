#include <stdio.h>

int main(){
	  
	  
	int s1,s2;
	
	printf("birinci sayiyi giriniz=");
	scanf("%d",&s1);
	
	printf("ikinci sayiyi giriniz=");
	scanf("%d",&s2);
	
	if (s1%s2 == 0){
		printf("%d %d nin tam katidir",s1,s2);
		
	}	
	else if (s2%s1 == 0){
		printf("%d %d nin tam katidir",s2,s1);
	}
	else {
		printf("tam kati degildir.");
	}
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

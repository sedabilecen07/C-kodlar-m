#include <stdio.h>
 
 int main(){
 	
 	int tercih;
 	
 	printf("hangi dili kullanmak istiyorsunuz?\n");
 	printf("1- C dili\n2- java dili\n3- C++ dili\n4-Phyton dili\n");
 	printf("tercih ettiginiz numarayi tuslayiniz=");
 	scanf("%d",&tercih);
 	
 	switch(tercih){
 		
 		case 1:printf("dev c++ compiler i indirmeniz gerekmektedir."); break;
 		case 2:printf("netbeans compiler i indirmeniz gerekmektedir."); break;
 		case 3:printf("visual stdio compiler i indirmeniz gerekmektedir."); break;
 		case 4: printf("anaconda compiler i indirmeniz gerekmektedir."); break;
	 }
 	
 	
 	
 	
 	
 	
 	
 	return 0;
 }

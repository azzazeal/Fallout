#include <stdio.h>
void main(){
  printf("\n\n\t FALLOUT \n\n");
    
float s1,s2,s3,s4,s5,s6,s7,n1;
	printf("ST:"); 
	scanf("%f", &s1);
	printf("PE:"); 
	scanf("%f", &s2);
	printf("EN:"); 
	scanf("%f", &s3);
	printf("CH:"); 
	scanf("%f", &s4);
	printf("IN:"); 
	scanf("%f", &s5);
	printf("AG:"); 
	scanf("%f", &s6);
	printf("LK:"); 
	scanf("%f", &s7);
	n1=15+(s1+s3*2);
	printf("HP: %2.0f",n1);

}

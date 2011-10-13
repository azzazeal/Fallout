#include <stdio.h>
void main(){
  printf("\n\n\t FALLOUT \n\n");
    
float sp1,sp2,sp3,sp4,sp5,sp6,sp7;
float sd1,sd2,sd3,sd4,sd5,sd6,sd7,sd8,sd9,sd10;
	printf("ST:"); scanf("%f", &sp1);
	printf("PE:"); scanf("%f", &sp2);
	printf("EN:"); scanf("%f", &sp3);
	printf("CH:"); scanf("%f", &sp4);
	printf("IN:"); scanf("%f", &sp5);
	printf("AG:"); scanf("%f", &sp6);
	printf("LK:"); scanf("%f", &sp7);
	sd1=15+(sp1+sp3*2);
	sd2=5+(sp6/2);
	sd3=25+25*sp1;
	sd4=sp1-5;
	sd5=5*sp3;
	sd6=2*sp3;
	sd7=2*sp6;
	sd8=(sp3/3);
	sd9=3+(sp3/2);
	sd10=5+(sp5*2);
	printf("\nHP : %4.0f\n",sd1);
	printf("AC : %4.0f\n",sp6);
	printf("AP : %4.0f\n",sd2);
	printf("Car: %4.0f\n",sd3);
	printf("MD : %4.0f\n",sd4);
	printf("PsR: %4.0f\n",sd5);
	printf("RdR: %4.0f\n",sd6);
	printf("GsR:  0/0\n");
	printf("ElR:    0\n");
	printf("DmR:    0\n");
	printf("Seq: %4.0f\n",sd7);
	printf("HR : %4.0f\n",sd8);
	printf("Crt: %4.0f\n",sp7);
	printf("HPL: %4.0f\n",sd9);
	printf("SP : %4.0f\n",sd10);
}

#include<stdio.h>

main() {

double R1,R2,R3,RS;

printf("Donnez R1 , R2 et R3 \n");

scanf("%lf",&R1);
printf("\n");
scanf("%lf",&R2);
printf("\n");
scanf("%lf",&R3);
printf("\n");

RS = R1 + R2+ R3;
float RP = (1/R1) + (1/R2) + (1/R3);
RP = 1/RP;



printf("RS= %lf \n",RS);
printf("RP= %0.2f \n",RP);


return 0;

}

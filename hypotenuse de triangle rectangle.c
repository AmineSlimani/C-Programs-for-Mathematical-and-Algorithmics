#include<stdio.h>
#include<math.h>

main() {

float AB,AC,BC;

printf("Donnez les valeurs de A,B et C \n ");
scanf("%f%f",&AB,&AC);
BC = pow(AB,2) + pow(AC,2);
BC = sqrt(BC);

printf("BC = %0.3f",BC);


return 0;


}

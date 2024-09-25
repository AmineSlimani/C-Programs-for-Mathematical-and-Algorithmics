#include<stdio.h>
#include<math.h>

main() {

int A,B,C;
double P,S;

printf("Donnez A ,B et C \n");
scanf("%d%d%d",&A,&B,&C);

P = (A+B+C)/2;
S = P*(P-A)*(P-B)*(P-C);
S = sqrt(S);

printf("L'aire de ce triangle est  %1f",S,"m^2");


return 0;
}

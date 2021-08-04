#include<stdio.h>
#include<conio.h>

main() {

int A,B;
int *P1,*P2;

P1 = &A;
P2 = &B;

do{
    printf("Donnez A et B : \n");
    printf("Valeur de A : ");
    scanf("%d",P1);
    printf("\n");
    printf("Valeur de B : ");
    scanf("%d",P2);
    printf("\n");
}while(B ==0);


printf("A + B = %d \n",*P1+*P2);
printf("A - B = %d \n",*P1-*P2);
printf("A x B = %d \n",*P1 * *P2);
printf("A / B = %d \n",*P1/ *P2);



}

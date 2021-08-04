#include<stdio.h>
#include<conio.h>


int ECHANGE(int *P1 ,int *P2 ){
         int temp1,temp2;

         if(*P1 * *P2 > 0){
            temp1 = *P1;
            *P1 = *P2;
            *P2 = temp1;
         }

         else{
            temp1 = *P1 + *P2;
            temp2 = *P1* *P2;
            *P1 = temp1;
            *P2 = temp2;
         }


}


main(){

int A,B;
int *P1,*P2;

P1 = &A;
P2 = &B;

printf("Donnez valeur de A : ");
scanf("%d",P1);
printf("\n");
printf("Donnez valeur de B : ");
scanf("%d",P2);
printf("\n");

ECHANGE(P1,P2);

printf(" valeur de A : %d \n",*P1);
printf(" valeur de B : %d \n",*P2);


}

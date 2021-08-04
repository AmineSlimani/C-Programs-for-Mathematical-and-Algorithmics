#include<stdio.h>

void echange(int *x ,int *y ){
 int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}



main() {

int A,B,C,temp,*P1,*P2,*P3 ;

P1 = &A;
P2 = &B;
P3 = &C;


printf("Donnez A , B  et C \n");
scanf("%d%d%d",P1,P2,P3);

if(*P1<*P2){

  echange(P1,P2);

}

if(*P1<*P3){

  echange(P1,P3);

}

if(*P2<*P3){

  echange(P2,P3);

}
printf("%d \n %d \n %d \n",*P1,*P2,*P3);






return 0;}

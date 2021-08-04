#include<stdio.h>
#include<conio.h>


main(){

int cmp;
char*P,CH[30];
P = CH;

printf("Donnez mot : ");
scanf("%s",P);
printf("\n");

cmp = 0;

while(*P != NULL){
    cmp++;
    P++;
}

printf("Longueur = %d ",cmp);

return 0;}

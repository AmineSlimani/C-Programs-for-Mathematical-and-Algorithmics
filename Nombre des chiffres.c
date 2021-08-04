#include<stdio.h>
#include<conio.h>



int NBR_CHIFF(long x ){

int cmp = 0;

do{
        cmp++;
        x=x/10;

}while(x!=0);


return(cmp);
}



main() {

long x;

printf("Donnez valeur de x > ");
scanf("%d",&x);
printf("\n");

printf("\n Nombres  des chiffres %d",NBR_CHIFF(x));




return 0;}

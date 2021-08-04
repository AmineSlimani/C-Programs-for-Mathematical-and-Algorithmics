#include<stdio.h>
#include<conio.h>

main(){

float U0,U1,U,S,n,x;

printf("Donnez V aleur x : ");
scanf("%f",&x);

U0 = 1.5;
U1 = 2;

n =0;
S= 0;
while(S<x){
    U = 0.3*U0 + 1.5*U1;
    S = S +U;
    U0 = U1;
    U1 = U;
    n++;
}

printf("a valeur de n faut >= %.f pour la quelle la somme est supérieure a %.2f ",n,x);






return 0;}

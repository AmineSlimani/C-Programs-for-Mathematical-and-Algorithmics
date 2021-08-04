#include<stdio.h>
#include<conio.h>
#include<string.h>


main(){

int n;
char JOUR[8][9]= {"\aErreur","LUNDI","MARDI","MERCREDI","JEUDI","VENDREDI","SAMEDI","DIMANCHE"};


printf("Donnez le nombre de jour\n");
scanf("%d",&n);

if(n>=1 && n<=7){
    printf("%s",JOUR[n]);
}
else{
    printf("%s",JOUR[0]);
}


return 0;}

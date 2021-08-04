#include<stdio.h>
#include<conio.h>
#include<time.h>

main() {

int T[10],i,MAX,MIN,PMAX,PMIN;
int min = 0, max = 31999;

srand(time(NULL));

// Remplissage de tableau :
for(i=0;i<10;i++){
    T[i] = (rand()%(max -min +1))+ min;
}

// Affichage du tableau :
for(i=0;i<10;i++){
printf("\n T[%d] = %d \n",i,T[i]);
}

// Recherche de MAX ET MIN :
MAX = T[0];
MIN = T[0];
PMAX,PMIN = 0;
for(i = 1;i<10;i++){
         if(MAX<T[i]){MAX = T[i];PMAX=i;}
         else{ if(MIN>T[i]){MIN = T[i];PMIN=i;}}
}

// affichage :

printf("\n La valeur maximum est %d est sa position :  %d \n",MAX,PMAX);
printf("\n La valeur minimum est %d est sa position :  %d \n",MIN,PMIN);


return 0;}

#include<stdio.h>
#include<conio.h>
#include<time.h>

int TAB[10],N,*P;

int Max1(){
    int maxi = *P;
    for(P=TAB;P<N+TAB;P++){
        if(maxi<*P){
            maxi = *P;
        }
    }

return maxi;}



int Max2(){
        int maxi = Max1(),i,cmp;
     for(i=0;i<N ;i++){
            if(maxi == TAB[i]){cmp = TAB[i];}
        }

return cmp;}

int Max3(){
    int maxi = Max1(),i,*adrs;
    for(i=0;i<N ;i++){
            if(maxi == TAB[i]){adrs = &TAB[i];}
        }

return adrs;}



main(){

int max = 10,min = 1;


// Remplissage :
do{
    printf("Donnez longueur de tableau <10 : ");
    scanf("%d",&N);
    printf("\n");
}while(N>10 || N<=1);

srand(time(NULL));

P = TAB;
for(P = TAB ;P<TAB+N;P++){
    *P = (rand()%(max-min+1))+min;
}


// Affichage :

for(P = TAB ;P<TAB+N;P++){
    printf("\n T[%d] = %d et  [%p] ",P-TAB,*P,P);
}

// Pocess :

printf("\n \n Valeur maximale = %d ",Max1(P));
printf("\n \n l'indice de valeur maximale = %d ",Max2(TAB[N]));
printf("\n \n l'iadresse de valeur maximale = %d ",Max3(P));

return 0;}

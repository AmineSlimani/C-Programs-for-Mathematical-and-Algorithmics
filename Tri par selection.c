#include<stdio.h>
#include<conio.h>
#include<time.h>

main() {

int T[10],i,j,PMAX,temp;
int min = 0, max = 33;

srand(time(NULL));

// Remplissage de tableau :
for(i=0;i<10;i++){
    T[i] = (rand()%(max -min +1))+ min;
}

// Affichage du tableau :
for(i=0;i<10;i++){
printf("\n T[%d] = %d \n",i,T[i]);
}


//Process

for(i=0;i<9;i++){
    PMAX= i ;
    for(j=i+1;j<10;j++){
        if(T[PMAX]<T[j]){
            PMAX = j;
        }
    }

    temp = T[PMAX];
    T[PMAX] = T[i];
    T[i] = temp;
}

// Affichage du tableau :
printf("\n \n");
for(i=0;i<10;i++){
printf("\n T[%d] = %d \n",i,T[i]);
}


return 0;}

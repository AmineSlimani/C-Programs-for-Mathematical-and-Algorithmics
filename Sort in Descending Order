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
    for(j=0;j<10;j++){
        if(T[j]<T[j+1]){
         temp = T[j+1];
         T[j+1] = T[j];
         T[j] = temp;        }
    }


}

// Affichage du tableau :
printf("\n \n");
for(i=0;i<10;i++){
printf("\n T[%d] = %d \n",i,T[i]);
}


return 0;}

#include<stdio.h>
#include<conio.h>
#include<time.h>



main() {

int T[50],TPOS[50],TNEG[50],i,N,cmp1,cmp2;
int min = -25,max = 25;

do{
    printf("Donnes longueur de tableau ");
    scanf("%d",&N);
}while(N<1 || N>50);

// Remplissage de tableau :
for(i=0;i<N;i++){
    T[i] = (rand()%(max-min+1))+min ;
}

//Affichage :
printf("Le Tableau T : \n");
for(i=0;i<N;i++){
    printf("\n T[%d] = %d \n",i,T[i]);
}


// Process :
cmp1 = 0; // pour TPOS
cmp2 = 0; // pour TNEG

for(i=0;i<N;i++){

    if(T[i]>0){
        TPOS[cmp1] = T[i];
        cmp1++;
    }

    if(T[i]<0){
        TNEG[cmp2] = T[i];
        cmp2++;
    }

}

// AFFichage :
printf("\n \n \n \n \n");
printf("Le Tableau TPOS : \n");
for(i=0;i<cmp1;i++){
    printf("\n TPOS[%d] = %d \n",i,TPOS[i]);
}

printf("\n \n \n \n \n");
printf("Le Tableau TNEG : \n");
for(i=0;i<cmp2;i++){
    printf("\n TNEG[%d] = %d \n",i,TNEG[i]);
}


return 0;}

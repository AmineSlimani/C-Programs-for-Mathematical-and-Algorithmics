#include<stdio.h>
#include<conio.h>


main(){

int A[20],B[30],N,M,*PA,*PB;
PA = A;
PB =B;


// Remplissage  :

do{
    printf("Longueur de A: ");
    scanf("%d",&N);
    printf("\n");
    printf("Longueur de B: ");
    scanf("%d",&M);
    printf("\n");
}while(N>20 || M>30);


printf("Remplissage de tableau A : \n");
for(PA=A;PA<N+A;PA++){
    printf("A[%d] =  ",PA-A);
    scanf("%d",PA);
    printf("\n");
}

printf("Remplissage de tableau B : \n");
for(PB=B;PB<M+B;PB++){
    printf("B[%d] =  ",PB-B);
    scanf("%d",PB);
    printf("\n");
}


// Affichage  :

printf("\n \nVoila le  tableau A : \n \n");
for(PA=A;PA<A+N;PA++){
    printf("T[%d] = %d \n",PA-A,*PA);
}

printf("\n \n Voila le  tableau B : \n\n");
for(PB=B;PB<B+M;PB++){
    printf("T[%d] = %d \n",PB-B,*PB);
}

// PROCESS :
PB =B;
for(PA=N+A;PB<M+B;PA++){
    *PA = *PB ;
    PB++;
}
N = N+M;
// Affichage aprés le traitement :
printf("\n \n Voila le  tableau aprés le traitement : \n\n");

for (PA=A; PA<A+N; PA++){
    printf("T[%d] = %d \n",PA-A,*PA);
}

return 0;}

#include<stdio.h>
#include<conio.h>


main(){


int P[12][13],i,j,N,M;


do{
    printf("Donnez nombre de ligne ce que tu veux ! \n");
    printf("Valeur de N > ");
    scanf("%d",&N);
    printf("\n");
}while(N<1 || N>12);

// Replissage = PROCESS  :

for(i=0;i<N;i++){
    P[i][0] = 1;
    P[i][i] = 1;
    for(j=1;j<i;j++){
        P[i][j] = P[i-1][j] + P[i-1][j-1];
    }
}



// Affichage de matrice  :
printf("\n le triangle de pascal  \n");
for(i=0;i<N;i++){
    printf("\n");
    for(j=0;j<=i;j++){
        printf("%d \t",P[i][j]);
    }
}



return 0;}

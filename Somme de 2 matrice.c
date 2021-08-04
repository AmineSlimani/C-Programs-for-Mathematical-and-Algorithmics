#include<stdio.h>
#include<conio.h>
#include<time.h>


main(){


int A[3][3],B[3][3],i,j;
int min = 0,max = 9;

srand(time(NULL));

// Replissage  :
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        A[i][j] = (rand()%(max - min +1))+ min;
        B[i][j] = (rand()%(max - min +1))+ min;
    }
}


// Affichage de matrice  :
printf("\n MATRICE 1 \n");
for(i=0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++){
        printf("%d \t",A[i][j]);
    }
}

printf("\n \n MATRICE B \n");
for(i=0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++){
        printf("%d \t",B[i][j]);
    }
}

// Process  :

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        A[i][j] =  A[i][j] + B[i][j];
}}


// AFfichage de la somme de deux matrices :
printf("\n \n MATRICE C (A +B ) \n");
for(i=0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++){
        printf("%d \t",A[i][j]);
    }
}
return 0;}

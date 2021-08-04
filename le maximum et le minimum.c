#include<stdio.h>
#include<time.h>


main() {


int max= 10,min=2,i,j,MAX,MIN,MATRICE[5][5];
srand(time(NULL));

// Remplissage de Matrice :

for(i = 0;i<5;i++){
    for(j=0 ; j<5;j++){
        MATRICE[i][j] = rand()%(max-min +1)+min;
    }
}

// Affichage de Matrice :

for(i = 0;i<5;i++){
    for(j=0 ; j<5;j++){
        printf("%d \t",MATRICE[i][j]);
    }
    printf("\n");
}
 // Traitement de MAX et MIN dans chaque ligne :

for(i = 0;i<5;i++){
    MAX = MATRICE[i][0];
    MIN = MATRICE[i][0];
    for(j=0 ; j<5;j++){
        if(MAX<MATRICE[i][j]){MAX = MATRICE[i][j];}
        if(MIN>MATRICE[i][j]){MIN = MATRICE[i][j];}

    }
    printf("le maximum de ligne num  %d est %d \n" ,i,MAX);
    printf("le minimum de ligne num  %d est %d \n" ,i,MIN);

}


 // Traitement de MAX et MIN dans chaque ligne :

for(j = 0;j<5;j++){
    MIN = MATRICE[i][0];
    MAX = MATRICE[i][0];
    for(i=0 ; i<5;i++){
        if(MAX<MATRICE[i][j]){MAX = MATRICE[i][j];}
        if(MIN>MATRICE[i][j]){MIN = MATRICE[i][j];}

    }
    printf("le maximum de colonne num %d est %d \n" ,i,MAX);
    printf("le minimum de colone num %d est %d \n" ,i,MIN);

}


return 0;}

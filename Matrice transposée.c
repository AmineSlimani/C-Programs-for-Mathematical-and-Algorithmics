#include<stdio.h>
#include<time.h>


main() {

int i,j,M[3][3],MT[3][3],max = 99 , min = 10;


srand(time(NULL));

for( i = 0 ; i< 3;i++) {
    for( j = 0 ; j<3;j++) {
       M[i][j] = (rand()%(max + min -1) + min);
    }

}

printf("\n  La matrice 1  : \n ");
for( i = 0 ; i< 3;i++) {
    for( j = 0 ; j<3;j++) {
       printf(" %d \t ",M[i][j]);
    }
 printf("\n");
}

for( i = 0 ; i< 3;i++) {
    for( j = 0 ; j<3;j++) {
       MT[i][j] = M[j][i];
    }

}

printf("\n  La Matrice transposée   : \n ");
for( i = 0 ; i< 3;i++) {
    for( j = 0 ; j<3;j++) {
       printf(" %d \t ",MT[i][j]);
    }
 printf("\n");
}




return 0;}

#include<stdio.h>
#include<time.h>


main() {

int i,j,M1[3][3],MT[3][3],M3[3][3],max = 4 , min = 0;


srand(time(NULL));

for( i = 0 ; i< 3;i++) {
    for( j = 0 ; j<3;j++) {
       M1[i][j] = (rand()%(max + min -1) + min);
    }

}

printf("\n  La matrice 1  : \n ");
for( i = 0 ; i< 3;i++) {
    for( j = 0 ; j<3;j++) {
       printf(" %d \t ",M1[i][j]);
    }
 printf("\n");
}

for( i = 0 ; i< 3;i++) {
    for( j = 0 ; j<3;j++) {
       MT[i][j] = (rand()%(max + min -1) + min);
    }

}

printf("\n  La matrice 2  : \n ");
for( i = 0 ; i<3;i++) {
    for( j = 0 ; j<3;j++) {
       printf(" %d \t ",MT[i][j]);
    }
 printf("\n");
}

int S;
for( i = 0 ; i< 3;i++) {

    for( j = 0 ; j<3;j++) {
            M3[i][j] = 0 ;
              for(int k = 0 ; k<3;k++) {
                  M3[i][j] =  M3[i][j] + (MT[i][k] * M1[k][j]);

    }
    }

}


printf("\n  La matrice 3  : \n ");
for( i = 0 ; i<3;i++) {
    for( j = 0 ; j<3;j++) {
       printf(" %d \t ",M3[i][j]);
    }
 printf("\n");
}

return 0;}

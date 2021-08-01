#include<stdio.h>
#include<time.h>


main() {

int i,j,M1[3][3],M2[3][3],temp,max = 9 , min = 0;


srand(time(NULL));

for( i = 0 ; i<3;i++) {
    for( j = 0 ; j<3;j++) {
       M1[i][j] = (rand()%(max + min -1) + min);
    }

}


printf("\n  La matrice 1  : \n ");
for( i = 0 ; i<3;i++) {
    for( j = 0 ; j<3;j++) {
       printf(" %d \t ",M1[i][j]);
    }
 printf("\n");
}



for( i = 0 ; i<2;i++) {
    for( j = i+1 ; j<3;j++) {
            temp  = M1[i][j];
            M1[i][j] =  M1[j][i];
            M1[j][i] = temp ;
    }

}

printf("\n  La matrice 2  : \n ");
for( i = 0 ; i<3;i++) {
    for( j = 0 ; j<3;j++) {
       printf(" %d \t ",M1[i][j]);
    }
 printf("\n");
}




}

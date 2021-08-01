#include<stdio.h>
#include<time.h>


main() {

int s,i,j,M1[5][5],max = 9 , min = 0;


srand(time(NULL));

for( i = 0 ; i< 5;i++) {
    for( j = 0 ; j<5;j++) {
       M1[i][j] = (rand()%(max + min -1) + min);
    }

}

printf("\n  La matrice 1  : \n ");
for( i = 0 ; i<5;i++) {
    for( j = 0 ; j<5;j++) {
       printf(" %d \t ",M1[i][j]);
    }
 printf("\n");
}
s = 0;
for( i = 0;i<5;i++) {
    for( j = 0 ; j<5;j++) {
            if(i==j){s= s + M1[i][j];}
    }

}
printf(" somme = %d",s);
}

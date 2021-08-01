#include<stdio.h>
#include<time.h>


main() {


int i,j,MATRICE[2][2],det;


for(i = 0;i<2;i++){
    for(j=0 ; j<2;j++){
            printf("Donnez  MATRICE[%d][%d] = ",i,j);
            scanf("%d",&MATRICE[i][j]);
    }
}


for(i = 0;i<2;i++){
    for(j=0 ; j<2;j++){
        printf("%d \t",MATRICE[i][j]);
    }
    printf("\n");
}

det = MATRICE[0][0]*MATRICE[1][1] - MATRICE[1][0]*MATRICE[0][1];

printf("det(M) = %d \n",det);

}

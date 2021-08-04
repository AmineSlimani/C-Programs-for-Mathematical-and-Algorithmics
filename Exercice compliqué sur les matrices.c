#include<stdio.h>
#include<conio.h>


main(){


int A[3][3]={{1,2,3},{4,5,6},{7,9,8}};
int MAX[3][3],MIN[3][3],PCS[3][3];
int i,j,cmp,min,max;

printf("\n Voila la mtrice A : \n");
for(i = 0;i<3;i++){
    for(j=0;j<3;j++){
            MAX[i][j] = NULL ;
            MIN[i][j] = NULL ;

    }
}


// Affichage de matrice A :
printf("\n Voila la matrice A : \n");
for(i = 0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++){
        printf("%d \t",A[i][j]);
    }
}

// MAX :
for(i=0;i<3;i++){
    max = A[i][0];
    cmp = 0;

    for(j=0;j<3;j++){
        if(max<A[i][j]){max = A[i][j]; cmp++; }
    }

    MAX[i][cmp] = max;
}

printf("\n Voila la matrice MAX : \n");
for(i = 0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++){
        printf("%d \t",MAX[i][j]);
    }
}


// MIN :
for(j = 0;j<3;j++){
    min = A[0][j];
    cmp = 0;
    for(i = 0 ;i<3;i++){
        if(min>A[i][j]){
            min = A[i][j];
            cmp ++;
        }
    }
    MIN[cmp][j] = min;
}

printf("\n Voila la matrice MIN : \n");
for(i = 0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++){
        printf("%d \t",MIN[i][j]);
    }
}


// Matrice points colls :

for(i = 0 ; i<3;i++){
    for(j=0;j<3;j++){
        if(MIN[i][j]&&MAX[i][j]){
            PCS[i][j] = MAX[i][j];
        }
        else{PCS[i][j] = 0;}
    }
}

printf("\n Voila la matrice PCS : \n");
for(i = 0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++){
        printf("%d \t",PCS[i][j]);
    }
}


return 0;}

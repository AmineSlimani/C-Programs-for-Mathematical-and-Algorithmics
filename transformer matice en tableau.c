#include<stdio.h>
#include<conio.h>
#include<time.h>


main() {



int MA[10][10],TAB[100],N,M,i,j,*P,cmp;
int max= 10,min = 0;

// Remplissage :
do{
    printf("Donnez les dimensions de matrice <10 \n");
    printf("Valeur de N : ");
    scanf("%d",&N);
    printf("\n");
    printf("Valeur de M : ");
    scanf("%d",&M);
    printf("\n");
}while(N>=10 || M>=10);

srand(time(NULL));
P =MA;
// Remplissage :
for(i = 0 ;i<N;i++){
    for(j=0;j<M;j++){
       *(P+M*i+j) = (rand()%(max-min+1))+min;
    }
}

// TABLEAU UNIDIMENSONNEL :
cmp= 0;
for(i = 0 ;i<N;i++){
    for(j=0;j<M;j++){
      TAB[cmp]=*(P+M*i+j);
      cmp++;
    }
}

// AFFichage :
printf("\n Matrice avant le traitement \n");
for(i=0;i<N;i++){
    printf("\n");
    for(j=0;j<M;j++){
        printf("%d \t",*(P+i*M+j));
    }
}

printf("\n Matrice aprés le traitement \n");
for(j=0;j<M;j++){
    printf("\n");
    for(i=0;i<N;i++){
        printf("%d \t",*(P+i*M+j));
    }
}


printf("\n Le tableau : \n");
for(i = 0 ;i<N*M;i++){
        printf("T[%d] = %d \n",i,TAB[i]);
    }



return 0;}

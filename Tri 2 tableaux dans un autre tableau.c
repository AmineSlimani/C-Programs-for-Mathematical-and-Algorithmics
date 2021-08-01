#include<stdio.h>
#include<conio.h>

main() {

int A[100],B[300],FUS[400],IB,IA,IFUS,i,j,N,M;

do {
    printf("Donnez  Longueur de tableau A \n");
    scanf("%d",&N);
    printf("Donnez  Longueur de tableau B \n");
    scanf("%d",&M);
}while(N>100 || M>300);

printf("Tableau A : \n");
for(i=0;i<N;i++){
    printf("A[%d] = ",i);
    scanf("%d",&A[i]);
    printf("\n");
}

printf("Tableau B : \n");
for(i=0;i<M;i++){
    printf("B[%d] = ",i);
    scanf("%d",&B[i]);
    printf("\n");
}



IA =0;
IB= 0;
IFUS = 0;


while(IA<N && IB<M){

    if(A[IA]<B[IB]){
        FUS[IFUS] = A[IA];
        IA++;
        IFUS++;
        }

     else {
        FUS[IFUS] = B[IB];
        IB++;
        IFUS++;
        }
}


if(IA<N){
    for(i=IA;i<N;i++){
        FUS[IFUS] = A[i];
        i++;
        IFUS++;
    }
}

else{
    for(i=IB;i<N;i++){
        FUS[IFUS] = B[i];
        i++;
        IFUS++;
    }
}

printf("Le tableau A  ; \n");

    for(i = 0 ;i<N;i++){
     printf("A[%d] = %d \n",i,A[i]);
    }

     printf("Le tableau B  ; \n");

    for(i = 0 ;i<M;i++){
     printf("B[%d] = %d \n",i,B[i]);
    }

    printf("Le tableau FUS  ; \n");

    for(i = 0 ;i<N+M;i++){
     printf("FUS[%d] = %d \n",i,FUS[i]);
    }



return 0;}

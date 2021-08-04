#include<stdio.h>
#include<conio.h>
#include<time.h>

int T[41],N,i,j;


void TRI_BULLE(){

      int temp ;
      for(i=0;i<N;i++){
        for(j=0;j<N-1;j++){
            if(T[j]>T[j+1]){
                temp = T[j];
                T[j] = T[j+1];
                T[j+1] = temp;
            }
        }
      }

        for(i=0;i<N;i++){printf("T[%d] = %d \n",i,T[i]);}

}


main(){

int max = 100,min =0;

do{
    printf("Longueur de Tableau <40 \n");
    printf("Valeur de N : ");
    scanf("%d",&N);
    printf("\n");
}while(N>40);


srand(time(NULL));
   for(i=0;i<N-1;i++){T[i] = (rand()%(max-min+1))+min;}

   TRI_BULLE(T[N]);

}


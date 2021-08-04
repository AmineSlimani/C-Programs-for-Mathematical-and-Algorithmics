#include<stdio.h>
#include<conio.h>


main(){

int T[10],i,N;
int *P1,*P2;


do{
    printf("Donnez  n \n");
    scanf("%d",&N);
}while(N<=0 || N>10);

// Remplissage de tableau par utilisation des pointeurs :
for(P1=T;P1<T+N;P1++){
    printf("Donnez l'element %d : ",P1-T);
    scanf("%d",P1);
    printf("\n");
}
// affichage  du tableau par utilisation des pointeurs :
for(P1 = T;P1<T+N;P1++){
    printf("T[%d] = %d \n",P1-T,*P1);
}




}

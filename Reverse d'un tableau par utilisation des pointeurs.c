#include<stdio.h>
#include<conio.h>


main(){


int *P1,*P2,T[10],AIDE,n;

// Remplissage :
do{
    printf("Donnez longueur de tableau : ");
    scanf("%d",&n);
    printf("\n");
}while(n<=0 || n>10);

for(P1=T;P1<T+n;P1++){
    printf("Donnez T[%d] > ",P1-T);
    scanf("%d",P1);
    printf("\n");
}


// Affichage
printf("LE TABLEAU avant traitement \n");
for(P1=T;P1<T+n;P1++){
    printf(" T[%d] = %d \n",P1-T,*P1);
}


// Process
P2 = T+n-1;
for(P1=T;P1<P2;P1++){
    AIDE = *P1;
    *P1 = *P2;
    *P2 = AIDE;
    P2--;

}

// Affichage
printf("LE TABLEAU avant traitement \n");
for(P2=T;P2<T+n;P2++){
    printf(" T[%d] = %d \n",P2-T,*P2);
}





return 0;}

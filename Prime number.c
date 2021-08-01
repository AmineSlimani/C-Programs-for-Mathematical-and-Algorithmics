#include<stdio.h>


void premier(){

int n,x,cmp,i,estpremier;

do {
    printf("Donnez le nombre n : ");
    scanf("%d",&n);
}while(n<0);
int T[n];

cmp = 0;
x = 2 ;
while(cmp<n){
     i=2;
     estpremier = 1;
     while(estpremier==1 && i<=x/2){
        if(x%i==0){estpremier = 0;}
        i++;
     }

     if(estpremier == 1){
        T[cmp] = x;
        cmp++;}
     x++;
}

for(i=0;i<n;i++){
    printf("T[%d] = %d \n",i,T[i]);
}
}

main() {
premier();
int contin = 1,choix;
while(contin){
    printf("Tu veux faire ça autre fois  ? \n");
    printf(" 1 : yes \n 2 : No \n ");
    scanf("%d",&choix);
    if (choix == 1 ){premier();}
    else {
        if(choix ==2){contin=0;}
        else {printf("1 pour Oui \n 2 pour non \n");}
    }
}




return 0;}

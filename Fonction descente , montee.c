#include<stdio.h>

void montee(int n){

    if(n!=0){
        montee(n-1);
        printf("%d ",n);
    }
}


void descente(int n){

    if(n!=0){
        printf("%d ",n);
        descente(n-1);
    }
}

int main() {

int X;
printf("Donnez n : ");
scanf("%d",&X);
printf("\n");
montee(X);
printf("\n");
descente(X);
}

#include<stdio.h>

float T[10];
int i;

void remplir(){
for(i=0;i<10;i++){
    printf("Donnez l'element %d : ",i);
    scanf("%f",&T[i]);
    printf("\n");
}
}

float tri(){

float temp;
int j;

for(i=0;i<9;i++){
    for(j=i+1;j<10;j++){
        if(T[i]<T[j]){
            temp = T[i];
            T[i] = T[j];
            T[j] = temp ;}}}

for(i=0;i<10;i++){
    printf("%.f \t",T[i]);
}

}

float tri2(){

float temp;
int j;

for(i=0;i<9;i++){
    for(j=i+1;j<10;j++){
        if(T[i]>T[j]){
            temp = T[i];
            T[i] = T[j];
            T[j] = temp ;}}}

for(i=0;i<10;i++){
    printf("%.f \t",T[i]);
}
}

main(){

remplir();
printf("Ordre croissante \n");
tri();
printf(" \n Ordre deccroissante \n");
tri2();

return 0 ;}

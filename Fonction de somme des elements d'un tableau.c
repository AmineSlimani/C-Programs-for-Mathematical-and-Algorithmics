#include<stdio.h>
#include<time.h>




void affichage(int T[], int n){
    if (n!=0){
        affichage(T,n -1);
        printf("%d ",T[n]);}
}
double somme(int T[], int n){
    if(n==0){
        return 0;
    }
    else{
        return T[n]+somme(T,n-1);}
}
main(){

srand(time(NULL));
int T[5];
int r,n=0,MAX = 10 ,MIN = 1;

printf("Donnez longuer de Tableau r ");
scanf("%d",&r);

do {
    T[n]= rand()%(MAX -MIN +1)+MIN;
    n++;
}while(n<5);
affichage(T,n);
printf("\n La somme = %.lf ",somme(T,n));

return 0;}

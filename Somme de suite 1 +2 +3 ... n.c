#include<stdio.h>

double somme(int n){
    if(n==0){
        return 0;
    }
    else{
        return n + somme(n-1);
    }
}


main() {
    int n;
    double s;
    do{
        printf("Donnez n : ");
        scanf("%d",&n);
    } while(n<0);

    s = somme(n);
    printf("La somme = %.lf",s);


return 0;}

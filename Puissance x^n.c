#include<stdio.h>

double puissance(int x, int n){
    if(n==0){
        return 1;
    }
    else{
        return x*puissance(x,n-1);
    }
}


main() {
    int n,x;
    double F;

        printf("Donnez x : ");
        scanf("%d",&x);
    do{
        printf("Donnez n : ");
        scanf("%d",&n);
    } while(n<0);

    F = puissance(x,n);
    printf("Le puissance %d^%d = %.lf",x,n,F);


return 0;}


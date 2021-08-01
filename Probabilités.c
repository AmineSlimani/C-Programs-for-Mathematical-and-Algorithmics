#include<stdio.h>

double proba(int p, int n){
    if(p==1){
        return n;
    }
    else{
        if(p==n){return 1 ;}
        else {return proba(p-1,n-1) + proba(p,n-1) ;}

    }
}


main() {
    int n,p;
    double F;

        printf("Donnez p : ");
        scanf("%d",&p);
    do{
        printf("Donnez n : ");
        scanf("%d",&n);
    } while(n<0);

    F = proba(p,n);
    printf("Les possibilites = %.lf",F);


return 0;}


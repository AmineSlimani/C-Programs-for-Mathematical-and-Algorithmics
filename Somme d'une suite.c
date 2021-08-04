#include<stdio.h>

main() {
float S;
int n,i;
do{printf("Entrez  nbr: ");
scanf("%d", &n);
 }while(n<1);
 for (i=1; i<=n; i++)
    {  S=S+(float)1/i;}
 printf (" \n S=%.2f",S);

return 0;

}

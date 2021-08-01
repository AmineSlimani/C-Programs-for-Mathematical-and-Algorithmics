#include<stdio.h>

int pgcd(int A ,int B){
    if(B == 0){ return A;}
    else {
        return pgcd(B,A%B);
    }
}




main() {
    int A,B,x,temp;

        printf("\n Donnez A : ");
        scanf("%d",&A);
        printf("\n Donnez B : ");
        scanf("%d",&B);


        x = pgcd(A,B);
        printf("%d",x);


return 0;}


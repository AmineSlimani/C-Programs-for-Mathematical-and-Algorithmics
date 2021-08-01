#include<stdio.h>


void base2(int n){
    if (n!=0){
        base2(n/2);
        printf("%d",n%2);

    }

}


main(){

int n;

do {
    printf("Donnez n> = 0 ");
    scanf("%d",&n);
}while(n<0);

base2(n);

return 0;}

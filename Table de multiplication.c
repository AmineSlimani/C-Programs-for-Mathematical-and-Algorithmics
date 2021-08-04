#include<stdio.h>

main()
{

int x,N,M,j,i=1;
do {
    printf("Donnez nombre des lignes \n ");
    scanf("%d",&N);
    printf("Donnez des colonnes <10 \n ");
    scanf("%d",&M);
}while(N>=10 || M>=10);


printf("\n la table de multiplication \n");
while (i <= N){
        printf("%d",i);
        j = 2;
        while (j <= M){
                x = i*j;
                printf("\t %d",x);
                j = j+1;
        }
        printf("\n");
        i = i +1;}

}

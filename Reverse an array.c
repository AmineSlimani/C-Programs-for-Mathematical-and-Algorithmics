#include<stdio.h>



main() {


int T[6],A[6];

for(int i = 0;i<6;i++){
    printf("Donnez l'element %d : ",i+1);
    scanf("%d",&T[i]);
    printf("\n");
}

printf("\n Tableau 1 : \n");
for(int i = 0;i<6;i++){
   printf("%d \t",T[i]);
}

for(int i = 0;i<6;i++){
   A[i] = T[5-i];
}

printf("\n Tableau 2 : \n");
for(int i = 0;i<6;i++){
   printf("%d \t",A[i]);
}


return 0;}

#include<stdio.h>
#include<time.h>

main() {


int i,j,M[4][6],n,t;
int max  = 9,min=0;
srand(time(NULL));

for(i=0;i<4;i++){
    for(j=0;j<6;j++){
        M[i][j] = rand()%(max -min + 1)+ min;
    }
}
for(i=0;i<4;i++){
    for(j=0;j<6;j++){
            printf("%d \t",M[i][j]);
    }
    printf("\n");
}

printf("Donnez N > ");
scanf("%d",&n);
printf("\n");
// t  = 0 nombre se ne trouve pas dans M
// t != 0 nombre se trouve dans M

t = 0;

for(i=0;i<4;i++){
    for(j=0;j<6;j++){
      if(n == M[i][j]){t++;}
    }
}

if(t==0){printf("%d  se ne trouve pas dans M",n);}
else{printf("%d se trouve dans M %d fois",n,t);}




return 0;}

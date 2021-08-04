#include<stdio.h>


main(){
float T[20];
int i;

T[0] = 1000;
for(i=1;i<=20;i++){
    T[i] = T[i-1]+  T[i-1]*0.02;
}
for(i=0;i<20;i++){
    printf("%d)  %.2lf \n",i,T[i]);
}

return 0 ;}

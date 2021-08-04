#include<stdio.h>
#include<conio.h>
#include<math.h>


float F(int x){
      float y ;
      y = sin(x) + log(x);
      return(y);
}

main(){

int i ,x;
do{
    printf("Donnez x : ");
    scanf("%d",&x);
}while(x<1 || x>10);

for(i=1;i<=x;i++){
    printf("F(%d) = %.2f ",i,F(i));
    printf("\n");
}

return 0;}

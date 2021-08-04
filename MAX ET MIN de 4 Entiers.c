#include<stdio.h>
#include<conio.h>

float  maximum(float x,float y){
       int max;
       if (x>y){
        max = x;
       }
       else {
        max = y;
       }
    return max;

}


float  minimum(float x,float y){
       int min;
       if (x<y){
        min = x;
       }
       else {
        min = y;
       }
    return min;

}



main() {

float x,y,z,t,max,min;
printf("Donnez deux nombre \n ");
scanf("%f%f%f%f",&x,&y,&z,&t);

max = maximum(maximum(z,t),maximum(x,y));
min = minimum(minimum(x,y),minimum(t,z));
printf("LE MAX = %.2f \n",max);
printf("LE MIN = %.2f \n",min);

return 0;}

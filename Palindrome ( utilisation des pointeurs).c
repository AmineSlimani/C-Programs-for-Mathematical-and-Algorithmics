#include<stdio.h>
#include<conio.h>


main(){


char mot[30],i,*P1,*P2,N;
int palindrome ;
P1 = mot;

printf("Donnez un mot  : ");
scanf("%s",P1);
printf("\n");
printf("%s",P1);

P1 = mot;
N = 0;

 // Calcul le longueur de mot :
while(*P1!= NULL){
    N++;
    P1++;
}

// Process :
P1 = mot;
P2 = N+mot-1;
palindrome =1;
while((palindrome==1)&&(P1<P2)){
    if(*P1 != *P2){
        palindrome =0;
    }

        P1++;
        P2--;

}

if(palindrome==1){
    printf("\n le mot est palindrome \n");
}

else{
        printf("\n le mot n'est pas palindrome \n");

}

return 0;}

#include<stdio.h>
#include<conio.h>


main(){


char mot[30],i,motR[30],N;
int palindrome ;

printf("Donnez un mot  : ");
scanf("%s",&mot);
printf("\n");
printf("%s",mot);

N = 0;
i=0;
 // Calcul le longueur de mot :
while(mot[i]!= NULL){
    N++;
    i++;
}

// Process :
i=0;
N--;
palindrome =1;
while((palindrome==1)&&(i<N)){
    if(mot[i] != mot[N]){
        palindrome =0;
    }

        i++;
        N--;

}

if(palindrome==1){
    printf("\n le mot est palindrome \n");
}

else{
        printf("\n le mot n'est pas palindrome \n");

}

return 0;}

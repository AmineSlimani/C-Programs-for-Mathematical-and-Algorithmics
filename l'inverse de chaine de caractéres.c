#include<stdio.h>
#include<conio.h>
#include<string.h>


main(){


char TXT[200],i,cmp,temp,j;

printf("Donnez une phrase : \n ");
gets(TXT);

// longueur de chaine :
printf("\n Longueur de chaine est %d \n",strlen(TXT));


//Le nombre de 'e'contenus dans le texte:
cmp = 0;
for(i=0;i<strlen(TXT);i++){
    if(TXT[i]== 'e'){cmp++;}
}
printf("\n Le nombre de 'e'contenus dans le texte est %d \n",cmp);

// Inverse de text :
for(i=strlen(TXT)-1;i>=0;i--){
    printf("%c",TXT[i]);
}
printf("\n");


// Inverse de text :
j=strlen(TXT)-1;
i= 0;
while(i<j){
        temp = TXT[i];
        TXT[i] = TXT[j];
        TXT[j] = temp;
        j--;i++;
}
puts(TXT);
return 0;}

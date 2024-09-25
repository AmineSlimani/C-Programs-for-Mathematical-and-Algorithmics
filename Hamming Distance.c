#include<stdio.h>
#include<string.h>


main() {

char t,i,mot1[30],mot2[30];

puts("Donnez mot 1 \n");
gets(mot1);

puts("Donnez mot 2 \n");
gets(mot2);

t = 0;
if(strlen(mot1) == strlen(mot2)){
    for(i = 0 ; i< strlen(mot1);i++){
        if(mot1[i]!= mot2[i]){t++;}
    }
    printf(" \n la distance de Hamming enre les deux mots est : %d",t);
}

else {
    puts("\n Les deux ne sont pas de meme longueur ");
}

return 0;}

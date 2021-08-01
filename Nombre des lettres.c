#include<stdio.h>
#include<string.h>


main() {

char t,i,mot[30];

puts("Donnez mot  \n");
gets(mot);

t = 0;
i = 0;
do {
        t++;
        i++;
}while(mot[i] != '\0');

printf("\n Longueur de cette mot est %d",t);

return 0;}

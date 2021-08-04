#include<stdio.h>
#include<conio.h>
#include<time.h>

 int A[50], B[50], FUS[100];
 int N, M,i;
 int IA, IB, IFUS;


main()
{

 printf("Dimension du tableau A (max.50) : ");
 scanf("%d", &N );
 printf("Entrer les éléments de A dans l'ordre croissant :\n");
 for (IA=0; IA<N; IA++)
    {
     printf("Elément A[%d] : ", IA);
     scanf("%d", &A[IA]);
    }
 printf("Dimension du tableau B (max.50) : ");
 scanf("%d", &M );
 printf("Entrer les éléments de B dans l'ordre croissant :\n");
 for (IB=0; IB<M; IB++)
    {
     printf("Elément B[%d] : ", IB);
     scanf("%d", &B[IB]);
    }


            IA = 0;
        IB= 0;
        IFUS=0;

        while(IA<N && IB<M){
            if(A[IA]<B[IB]){
                FUS[IFUS] = A[IA];
                IA++;
                IFUS++;
            }

            if(A[IA]>B[IB]){
                FUS[IFUS] = A[IA];
                IA++;
                IFUS++;
            }

          if(IA<N){
            for(i=IA;i<N;i++){
               FUS[IFUS] = A[i];
                IFUS++;
            }}

            if(IB<M){
            for(i=IB;i<M;i++){
               FUS[IFUS] = B[i];
                IFUS++;
            }
          }


     /* Affichage des tableaux A et B */
 printf("Tableau A :\n");
 for (IA=0; IA<N; IA++)
     printf("%d ", A[IA]);
 printf("\n");
 printf("Tableau B :\n");
 for (IB=0; IB<M; IB++)
     printf("%d ", B[IB]);
 printf("\n");
}

 printf("Tableau FUS :\n");
 for (IFUS=0; IFUS<N+M; IFUS++)
     printf("%d ", FUS[IFUS]);
 printf("\n");
 return 0;
}


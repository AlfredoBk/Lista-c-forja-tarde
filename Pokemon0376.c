//0376	Metagross	Steel Psychic	600	80	135	130	95	90	70
//ega Metagross0376	Metagross Mega Metagross	Steel Psychic	700	80	145	150	105	110	110
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
  setlocale(LC_ALL, "Portuguese");

   int i, n;

   printf("Informe um número: ");
   scanf(" %d", &n);

   
    for (i=0; i <=n; i++) {
        printf("%d\n", i * n);
   }


  system("pause");

}
//Mewtwo0150	Mewtwo	Psychic 680	106	110	90	154	90	130
//Mega Mewtwo X0150	Mewtwo Mega Mewtwo X	Psychic Fighting	780	106	190	100	154	100	130
//Mega Mewtwo Y0150	Mewtwo Mega Mewtwo Y	Psychic 780	106	150	70	194	120	140
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
  setlocale(LC_ALL, "Portuguese");

   int i, n;

   printf("Informe um número: ");
   scanf(" %d", &n);

   
    for (i=0; i <=n; i++) {
        printf("%d\n", i);
   }


  system("pause");

}
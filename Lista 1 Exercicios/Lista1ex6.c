/* 6. Leia quatro notas, calcule a m�dia aritm�tica e imprima o resultado. */

#include <stdio.h>
#include <locale.h>

main(){
int c=0;
float nota[4],soma,media;

setlocale(LC_ALL, "portuguese");

for(c=0;c<4;c++){
        printf("Digite a %d� nota: ",c+1);
        scanf("%f", &nota[c]);
        soma+=nota[c];
}

media = soma/4;

printf("\nA m�dia Aritm�tica �: %0.2f",media);
}

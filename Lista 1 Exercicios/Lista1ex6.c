/* 6. Leia quatro notas, calcule a média aritmética e imprima o resultado. */

#include <stdio.h>
#include <locale.h>

main(){
int c=0;
float nota[4],soma,media;

setlocale(LC_ALL, "portuguese");

for(c=0;c<4;c++){
        printf("Digite a %dº nota: ",c+1);
        scanf("%f", &nota[c]);
        soma+=nota[c];
}

media = soma/4;

printf("\nA média Aritmética é: %0.2f",media);
}


/* 10. Leia o tamanho do lado de um quadrado e imprima como resultado a sua �rea. */

#include <stdio.h>
#include <locale.h>

float lado, area;

main(){
setlocale(LC_ALL,"portuguese");

printf("Digite o lado do quadrado: ");
scanf("%f",&lado);

area = lado*lado;

printf("A �rea do quadrado � igual a: %0.2fm�",area);

}

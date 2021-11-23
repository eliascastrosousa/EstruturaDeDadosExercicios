
/* . Leia o valor do raio de um círculo e calcule a área do círculo correspondente. Imprima o
resultado dessa operação. A área do círculo é 𝜋 ∗ 𝑟𝑎𝑖𝑜², considere 𝜋 = 3,141592 . */

#include <stdio.h>
#include <locale.h>

float raio, area;

main(){

setlocale(LC_ALL, "portuguese");

printf("Digite o valor do raio de um circulo: ");
scanf("%f",&raio);

area = (raio*raio)*3,14;

printf("A área do circulo é igual a: %0.2f",area);

}

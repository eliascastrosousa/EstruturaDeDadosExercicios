/*15. Receba o sal�rio de um funcion�rio, calcule e imprima o valor do novo sal�rio, sabendo que
ele recebeu um aumento de 25%. */

#include <stdio.h>
#include <locale.h>

float val,aum;

main(){
setlocale(LC_ALL,"portuguese");

printf("Digite o valor $$ do produto: ");
scanf("%f",&val);

aum = val*1.25;
//aum = ;

printf("o valor R$%0.2f com aumento de 25%% � igual a: R$%0.2f",val,aum);

}


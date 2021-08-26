/*20. Escreva um algoritmo para criar um programa de ajuda para vendedores. A partir de um
valor total lido, mostre:
 O total a pagar com desconto de 10%;
 O valor de cada parcela, no parcelamento de 3 x sem juros;
 A comissão do vendedor, no caso de a venda ser a vista (5% sobre o valor com desconto)
 A comissão do vendedor, no caso de a venda ser parcelada (5% sobre o valor total)
*/
#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL,"portuguese");
float valor,desconto,comissao;

printf("Digite o valor: ");
scanf("%f",&valor);
desconto = valor*10/100;

printf("\nO total a pagar com desconto de 10%: R$%0.2f",valor-desconto);
printf("\nO valor de cada parcela, no parcelamento de 3 x sem juros: R$%0.2f\n",valor/3);
printf("\nA comissão do vendedor caso de a venda seja a vista: R$%0.2f",(valor-desconto)*0.05);
printf("\nA comissão do vendedor, no caso de a venda ser parcelada: R$%0.2f\n\n",valor*0.05);

}

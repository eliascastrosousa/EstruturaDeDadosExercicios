/*17. Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo-se que são descontados 8% para imposto de renda.*/

#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL,"portuguese");

int dias;
float desconto,valor;

printf("Digite o numero de dias trabalhados: ");
scanf("%d",&dias);

valor = dias*30;
desconto = valor*1.08/10;
printf("Dias Trabalhados: %d \nTotal a Pagar: R$%0.2f",dias,valor-desconto);

}

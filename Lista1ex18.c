/* 18. Faça um programa que lei o valor da hora de trabalho (em reais) e número de horas
trabalhadas no mês, e imprima o valor a ser pago ao funcionário, adicionando 10% sobre o
valor calculado. */

#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL,"portuguese");
int horas;
float valor,salario;

printf("Digite o valor da hora de trabalho: ");
scanf("%f",&valor);

printf("Digite a qnt de horas trabalhadas: ");
scanf("%d",&horas);

salario = (valor*horas)*1.1;

printf("Horas Trabalhadas no mês: %d \nO valor total a pagar ao funcionario é: R$%0.2f ",horas,salario);


}

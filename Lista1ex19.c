/*19. Receba o salário-base de um funcionário, calcule e imprima o salário a receber, sabendo-se
que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, paga 7% de
imposto sobre o salário-base.
*/

#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL,"portuguese");
int horas;
float salario,desconto,sal_total;

printf("Digite o Salario Base: ");
scanf("%f",&salario);

sal_total = salario*1.05;
desconto = sal_total*7/100;

printf("\nSalario Base: R$%0.2f \nSalario com Gratificação: R$%0.2f \nTotal a Pagar (Com dedução de imposto): R$%0.2f",salario,sal_total,sal_total-desconto);


}

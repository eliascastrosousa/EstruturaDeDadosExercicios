/*19. Receba o sal�rio-base de um funcion�rio, calcule e imprima o sal�rio a receber, sabendo-se
que esse funcion�rio tem uma gratifica��o de 5% sobre o sal�rio-base. Al�m disso, paga 7% de
imposto sobre o sal�rio-base.
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

printf("\nSalario Base: R$%0.2f \nSalario com Gratifica��o: R$%0.2f \nTotal a Pagar (Com dedu��o de imposto): R$%0.2f",salario,sal_total,sal_total-desconto);


}

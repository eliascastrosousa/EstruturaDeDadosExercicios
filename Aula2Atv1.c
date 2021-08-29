#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

float CalculoVantagens(float salario_h,int numero_f,int numero_h, float salario_f);

int main(){

//float sal_bruto,sal_familia, vantagens,
float sal_hora, sal_filho, resultado;
int num_horas, num_filhos;

printf("Digite o Valor da Hora/Salario: ");
scanf("%f",&sal_hora);

printf("Digite as Horas trabalhadas: ");
scanf("%d",&num_horas);

printf("Digite o Numero de Filhos: ");
scanf("%d",&num_filhos);

printf("Digite o valor do Salario por filho: ");
scanf("%f",&sal_filho);

resultado = CalculoVantagens(sal_hora, num_horas, num_filhos, sal_filho);

}

float CalculoVantagens(float salario_h,int numero_h ,int numero_f ,float salario_f ){

float salario_b = numero_h*salario_h;
float salario_fam = (numero_f*salario_f);
float vantagens = salario_b+salario_fam;

//printf("\n\nO valor do Salario e: %0.2f\nO valor do Salario Familia e de: %0.2f\nTotal de Vantagens: %0.2f\n\n",salario_b, salario_fam, vantagens);

printf("\n\nO valor do Salario e: %0.2f", salario_b);
printf("\nO valor do Salario Familia e de: %0.2f", salario_fam);
printf ("\nTotal de Vantagens: %0.2f\n\n",vantagens);

}

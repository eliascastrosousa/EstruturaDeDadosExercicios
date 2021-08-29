#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

float CalculoVantagens(float salario_h,int numero_f,int numero_h, float salario_f);
float CalculoDeducoes(float salario_h,int numero_f);

void main(){

//float sal_bruto,sal_familia, vantagens,
float sal_hora, sal_filho, resultado1,resultado2;
int num_horas, num_filhos;

printf("Digite o Valor da Hora/Salario: ");
scanf("%f",&sal_hora);

printf("Digite as Horas trabalhadas: ");
scanf("%d",&num_horas);

printf("Digite o Numero de Filhos: ");
scanf("%d",&num_filhos);

printf("Digite o valor do Salario por filho: ");
scanf("%f",&sal_filho);

resultado1 = CalculoVantagens(sal_hora, num_horas, num_filhos, sal_filho);
resultado2 = CalculoDeducoes(sal_hora,num_horas);
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

float CalculoDeducoes(float salario_h,int numero_f){
float salario_b = salario_h*numero_f;
float INSS = salario_b*0.08;
printf("Valor do INSS a ser pago: %0.2f",INSS);

IF
}


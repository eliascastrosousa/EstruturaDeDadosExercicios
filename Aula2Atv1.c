#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//modulos
float CalculoVantagens(float salario_h,int numero_f,int numero_h, float salario_f);
float CalculoDeducoes(float salario_h,int numero_f);

//variaveis globais
float sal_hora, sal_filho, resultado1,resultado2;
int num_horas, num_filhos;

int main(){

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

return 0;
}

//chamada do modulo vantagens
float CalculoVantagens(float salario_h,int numero_h ,int numero_f ,float salario_f ){
    float salario_b = numero_h*salario_h, salario_fam = (numero_f*salario_f), vantagens = salario_b+salario_fam;
    printf("\n\n------------------------------------");
    printf("\nO valor do Salario e: R$R$%0.2f \nO valor do Salario Familia e de: R$%0.2f \nTotal de Vantagens: R$%0.2f\n\n",salario_b, salario_fam, vantagens);
}

//chamada do modulo descontos
float CalculoDeducoes(float salario_h,int numero_f){
    float salario_b = salario_h*numero_f, INSS = salario_b*0.08, IRPF = salario_b*0.12, deducoes = INSS+IRPF;

    printf("------------------------------------");
    printf("\nValor do INSS a ser pago: R$%0.2f \nValor do IRPR a ser pago: R$%0.2f \nTotal de deducoes e de: R$%0.2f",INSS,IRPF,deducoes);
    printf("",IRPF);
    printf("\n------------------------------------\n\n");
}




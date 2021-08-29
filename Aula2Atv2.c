
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//modulos
void CalculoVantagens(float *valor1, int *qnt1, float *valor2, int *qnt2); //criação do metodo
//float CalculoDeducoes();

int main(){
    int q1, q2;
    float v1, v2;

    printf("Digite o Valor da Hora/Salario: ");
    scanf("%f", &v1);
    printf("Digite as Horas trabalhadas: ");
    scanf("%d", &q1);
    printf("Digite o Valor do Salario por filho: ");
    scanf("%f", &v2);
    printf("Digite as quantidade de filhos: ");
    scanf("%d", &q2);

    CalculoVantagens( &v1,  &q1,  &v2,  &q2); //chamada do metodo
    CalculoDeducoes(&v1,  &q1);
}

void CalculoVantagens(float *valor1, int *qnt1, float *valor2, int *qnt2){
    //float salario_bruto;

    float salario_bruto, salario_familia, total;

    salario_bruto = *valor1 * *qnt1;
    salario_familia = *valor2 * *qnt2;
    total = salario_bruto+salario_familia;

    printf("\n-----------------------------------");
    printf("\nValor do Salario Bruto: R$%0.2f",salario_bruto);
    printf("\nValor do Salario Familia: R$%0.2f ", salario_familia );
    printf("\nTotal de Vantagens: R$%0.2f",total );
    printf("\n-----------------------------------\n");

}
void CalculoDeducoes(float *valor1, int *qnt1){
    float salario_bruto, INSS, IRPF, TOTAL;

    salario_bruto = *valor1 * *qnt1;
    INSS = salario_bruto*0.08;
    IRPF = salario_bruto*0.12;
    TOTAL = INSS+IRPF;

    printf("\nValor do INSS a ser pago: R$%0.2f \nValor do IRPR a ser pago: R$%0.2f \nTotal de deducoes e de: R$%0.2f",INSS,IRPF,TOTAL);
    printf("\n-----------------------------------\n\n");




}


//

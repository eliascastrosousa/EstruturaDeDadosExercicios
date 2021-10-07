#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

    CalculoVantagens( &v1,  &q1,  &v2,  &q2);
    CalculoDeducoes(&v1,  &q1);
}

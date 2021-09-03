/* Faça um programa para leia o horário (hora, minuto e segundo) de início e a duração, em
segundos, de uma experiência biológica. O programa deve resultar com o novo horário (hora,
minuto e segundo) do termino da mesma.*/

#include <stdio.h>
#include <string.h>
#define tam 3
int horainicio[tam], segExp, horafim[tam], min,horas;

int main(){
printf("Inicio da experiencia\n");
printf("Digite a Hora[2 digitos] que comecou: ");
scanf("%d",&horainicio[0]);
printf("Digite o minuto[2 digitos] que comecou: ");
scanf("%d",&horainicio[1]);
printf("Digite o segundo[2 digitos] que comecou: ");
scanf("%d",&horainicio[2]);

printf("Horario de inicio: ");
for (int i = 0; i < tam; ++i){
        printf("%d ",horainicio[i]);
    }

    printf("Quantos Segundos durou a experiencia: ");
    scanf("%d",&segExp);

    min = segExp/60;
    horas = min/60;

    horafim[0] = horainicio+horas;
    horafim[1] = horainicio+min;
    


    printf("Horario do Termino da experiencia: ");
    for (int i = 0; i < tam; ++i)
    {
            
    }
}

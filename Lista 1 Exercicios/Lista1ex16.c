/*16. A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso.
Sendo que da quantia total:
 O primeiro ganhador receberá 46%;
 O segundo receberá 32%;
 O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores. */

#include <locale.h>
#include <stdio.h>

float premio=780;

main(){

setlocale(LC_ALL,"portuguese");

printf("O primeiro ganhador receberá 46%% equivalente a: %0.2f \n\nO segundo receberá 32%% equivalente a: %0.2f \n\nO terceiro receberá o restante equivalente a: %0.2f\n\n",(premio*1.46)-premio,(premio*1.32)-premio,(premio*1.22)-premio);

}

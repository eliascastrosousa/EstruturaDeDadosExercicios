/*4 – Crie uma função recursiva que receba por parâmetro dois valores inteiros x e y,
calcule e retorne o resultado de x y para o programa principal
*/

#include <stdio.h>
#include <stdlib.h>

int func(int x, int y);

main(){
    int x,y,c=0;

    printf("Digite o valor de X: ");
    scanf("%d",&x);
    printf("Digite o valor de Y: ");
    scanf("%d",&y);

    printf("\nResultado: %d\n\n",func( x,y));
}

int func(int x, int y){
    int pot=x;
    for(int c=1; c<y; c++){
        pot = pot*y;
    }return pot;
}


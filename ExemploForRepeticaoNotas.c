#include <stdio.h>

main(){

int notas[4], a;

for(a=0; a<4; a++){
    printf("Digite a nota %d: ", a+1);
    scanf("%d", &notas[a]);
}

for(a=0; a<4; a++){
    printf("\nNota %d: %d", a+1, notas[a]);
}
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){

setlocale(LC_ALL, "portuguese");

int v1[5], v2[5];
int i=0, j=0, c=0;

for(i=0; i<5; i++){
    printf("Informe o valor do elemento %d do vetor 1: ", i+1);
    scanf("%d", &v1[i]);
}
for(j=0; j<5; j++){
    printf("Informe o valor do elemento %d do vetor 2: ", j+1);
    scanf("%d", &v2[j]);
}
printf("\n");
// exibindo os valores

for(i=0; i<5; i++){
    printf("Posição [%d]: %d, ",i, v1[i]); }
printf("\n");
for(i=0; i<5; i++){
    printf("Posição [%d]: %d, ",i, v2[i]);}

printf("\n\n");
for(i=0; i<5; i++){
    for(j=0; j<5; j++){
        if(v1[i] == v2[j]){
            printf("Valores iguais na posição: %d e %d\n", i+1, j+1);
            c=1;
        }
    }
}
if(c==0){
    printf("\nnão possuem posições com valores comuns \n");
}

}

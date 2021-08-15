#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define TAM 50

main(){
setlocale(LC_ALL,"portuguese");

char texto[TAM], texto2[TAM];
int c=0, c1=0;

printf("Digite um texto ou frase: ");
gets(texto);

for(c=0; c<strlen(texto);c++){
    if(texto[c]== ' '){
       c1++;
    }
}
printf("O Texto tem %d espaço(s) em branco. ", c1);

for(c=0; c<strlen(texto);c++){
    if(texto[c] != ' '){
       texto2[c]= texto[c];
    }
}

printf("O texto sem espaços em branco fica assim:\n\n\"%s\"", texto);

}

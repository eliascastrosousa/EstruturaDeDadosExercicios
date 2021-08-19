#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define TAM 50

main(){
setlocale(LC_ALL,"portuguese");

char frase[TAM], fraseformatada[TAM];
int c=0, espacos=0, ;

printf("Digite uma frase: ");
gets(frase);

for(c=0; c<strlen(frase);c++){
    if(frase[c]== ' '){
       espacos++;
    }
}
printf("A Frase é: %s \n",frase);
printf("A Frase tem %d Caracteres e %d espaço(s) em branco. ", strlen(frase) ,espacos);

for(c=0; c<strlen(frase);c++){
    if(frase[c] != ' '){
            fraseformatada[c] = frase[c];

    }else{
        espacos++;
    }
}

printf("\nO texto sem espaços em branco fica assim: %s",fraseformatada);

//for(c=0; c<strlen(fraseformatada);c++){ printf("%c", fraseformatada[c]);}

}

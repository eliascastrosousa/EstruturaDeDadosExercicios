#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define TAM 50

main(){
setlocale(LC_ALL,"portuguese");

char frase[101], fraseformatada[101];
int c=0, espacos=0;

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
    if(frase[c] == ' '){
            frase[c]=frase[c+1];
            //frase[c]=frase[c];
    }
}

printf("\nO texto sem espaços fica: %s",frase);

//for(c=0; c<strlen(frase);c++){ printf("%c", frase[c]);}

}

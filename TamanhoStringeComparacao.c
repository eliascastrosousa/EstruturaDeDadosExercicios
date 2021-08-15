#include <stdio.h>
#include <locale.h>
#include <string.h>
#define TAM 20

main(){
setlocale(LC_ALL,"portuguese");

char string1[TAM], string2[TAM];
int tamstring1, tamstring2;

printf("Digite duas palavras e finalize cada uma com enter: ");
gets(string1);
gets(string2);

printf("\nAs palavras são: %s e %s", string1, string2);

tamstring1 = strlen(string1);
tamstring2 = strlen(string2);

printf("\n\nA Palavra %s tem %d Letras", string1, tamstring1);
printf("\nA Palavra %s tem %d Letras", string2, tamstring2);

if(!strcmp(string1, string2)){
    printf("\n\nAs Strings são iguais!");
}else{
    printf("\n\nAs Palavras são diferentes!");
}






}

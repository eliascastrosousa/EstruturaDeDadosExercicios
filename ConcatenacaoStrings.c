#include <stdio.h>
#include <locale.h>
#include <string.h>
#define TAM 20

main(){
setlocale(LC_ALL,"portuguese");

char string1[TAM], string2[TAM];

printf("Digite duas palavras e finalize cada uma com enter: ");
gets(string1);
gets(string2);

strcat(string1,string2);

printf("Strings concatenadas: %s", string1);


}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define TAM 20

main(){
setlocale(LC_ALL,"portuguese");

char string1[TAM] = "Brasileiro";
char string2[TAM] = "Brasil";
char letra = 's';

//Comparando as Strings

if(strchr(string1,"s")){
    printf("\nA letra %c esta na palavra %s", letra, string1);
}
if(strstr(string1,string2)){
    printf("A Palavra \"%s\" esta na palavra \"%s\"", string2, string1);
}
printf("\n\n\n");
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define TAM 20

main(){
setlocale(LC_ALL,"portuguese");

char string1[TAM] ;
char string2[TAM] ;
char string3[TAM] ;
char letra;
int c, c1=0, c2=0;

printf("Digite duas palavras e finalize cada uma com enter: \n");
gets(string1);
gets(string2);

printf("Digite uma letra: ");
scanf("%c", &letra);

printf("pesquise uma palavra parcial para ver se ela aparece nas palavras escritas anteriormente: ");
scanf("%s", &string3);

for(c=0; c<strlen(string1);c++){
    if(string1[c]==letra){
        c1++;
    }
}
for(c=0; c<strlen(string2);c++){
    if(string2[c]==letra){
        c2++;
    }
}

if(strstr(string1,string3)){
    printf("\nA Palavra \"%s\" esta na palavra \"%s\"", string3, string1);
}
if(strstr(string2,string3)){
    printf("\nA Palavra \"%s\" esta na palavra \"%s\"", string3, string2);
}

printf("\n\nA letra \"%c\" aparece na palavra %s %d Vez(es)", letra, string1, c1);
printf(" e %d vez(es) na palavra %s.\n\n", c2, string2);


}

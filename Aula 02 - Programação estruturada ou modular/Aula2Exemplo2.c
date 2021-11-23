#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

char calculatotal(char nome , char sobrenome);

int main(){
setlocale(LC_ALL,"portuguese");

char nome_aluno[10], sobrenome_aluno[10], sobrenome_completo[20];

printf("Digite um nome: ");
fgets(nome_aluno,10,stdin);
printf("Digite um sobrenome: ");
fgets(sobrenome_aluno,10,stdin);
sobrenome_completo[20] = calculatotal(nome_aluno,sobrenome_aluno);
printf("Nome completo: ",sobrenome_completo);
}

 char calculatotal(char nome , char sobrenome){
    return (nome + sobrenome);
}



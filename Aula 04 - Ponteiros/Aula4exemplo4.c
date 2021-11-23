#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
	char nome[30];
	int idade;
};

void main(){
	struct pessoa p1,*p3;

	p3 = &p1;
	strcpy((*p3).nome, "ana");
	(*p3).idade = 18;
	printf("Nome: %s \nIdade: %d\n",p1.nome, p1.idade );

	printf("\nDigite a Nova Idade: ");
	scanf("%d", &(*p3).idade);
	getchar();
	printf("\nDigite o novo nome: ");
	scanf("%s", &(*p3).nome);

	printf("\nNome: %s, Idade: %d\n",p1.nome, p1.idade );
}

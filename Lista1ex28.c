/*28. Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a
segunda prova têm peso 1 e a terceira tem peso 2. Antes de o usuário entrar com as notas do
aluno ele deve entrar com o número de matricula do aluno. Ao final, mostrar a matricula do
aluno juntamente com a sua média e indicar se o aluno foi aprovado ou reprovado. A nota
para aprovação deve ser igual ou superior a 60 pontos.*/

#include <stdio.h>
#include <string.h>
#define tam 3

int main(){
	float nota[tam],media;
	char ra[10];

	for (int i = 0; i < tam; ++i){
		printf("Digite a nota da Prova [%d]: ",i+1);
		scanf("%f",&nota[i]);
	}
	media = nota[2]*2;
	media = media+nota[0]+nota[1];
	media = media/3;

	getchar();
	printf("Digite seu prontuario: ");
	fgets(ra, 10, stdin);

	printf("\nProntuario: %s",ra);

	if (media >= 6){
		printf("\nParabens, Aprovado!! Media igual a: %0.2f\n\n",media);
	}else{
		printf("\nInfelizmente voce foi Reprovado! Media igual a: %0.2f\n\n",media);
	}
}

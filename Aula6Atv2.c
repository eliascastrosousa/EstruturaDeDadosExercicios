#include <stdio.h>
#include <stdlib.h>
#define tam 5
int main(void){

int *p, qtdAlunos;

printf("Digite a Quantidade de Alunos: ");
scanf("%d", &qtdAlunos);

p = (int*) malloc(qtdAlunos * sizeof(int));

if (p == NULL){
	printf("Erro: Sem memoria!\n");
}
float media=0;
for (int i = 0; i < qtdAlunos; ++i){
        printf("Digite a Nota do Aluno [%d]: ",i+1);
        scanf("%d",&p[i]);
        media += p[i];
   }
for (int i = 0; i < qtdAlunos; ++i){
        printf("Aluno [%d], Nota: %d \n",i+1,p[i]);
   }

printf("Media da Sala: [%0.2f]",media/qtdAlunos);

free(p);
return 0;

}

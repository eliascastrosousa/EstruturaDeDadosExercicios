/* Atividade 2
 Modifique o programa da Atividade 1 para que o registro se torne um “tipo” e dessa
forma ser possível a declaração direta do registro, para isso utilize o comando typedef;

 Crie duas funções. Uma para coletar os dados fornecidos pelos usuários, que não
receberá parâmetro algum, mas retornará uma estrutura completa e preenchida, e
outra para gerar as impressões na tela;

 Crie um procedimento (função que não retorna valor), onde o salário do funcionário
sofrerá um reajuste de 10%. Nesta função, somente o campo salário da estrutura
funcionário será passado como parâmetro e terá obrigatoriamente que ser por
referência, utilizando-se o endereço do campo (ponteiro).

 Gere uma impressão em tela onde será exibido somente o nome do funcionário e o
novo valor de salário, a rotina de impressão deverá ficar em outra função chamada
rel_salario_corrigido();

 Entregue no Moodle como Atividade 2.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define tam 2

typedef struct funcionario{
    int id;
    int idade;
    char nome[30];
    float salario;
} FUNCIONARIO;

//criação das funções
FUNCIONARIO ColetaDados();
void ImprimeDados(FUNCIONARIO f_exibir );
void ReajusteSalario(float *salario);
void rel_salario_corrigido(FUNCIONARIO f_exibir);

int main(){
	FUNCIONARIO /* -> */  f[tam];
    f[tam] = ColetaDados(tam);
    ImprimeDados(f[tam]);
    ReajusteSalario(&f[tam]);
    rel_salario_corrigido(f[tam]);
}

FUNCIONARIO ColetaDados() {
	FUNCIONARIO func[tam];
	for (int  c= 0; c < tam; ++c){
		printf("Digite o ID do funcionario [%d]: ",c+1);
    	scanf("%d",&func[c].id);

    	getchar();
    	printf("Digite o nome do funcionario [%d]: ",c+1);
    	fgets(func[c].nome,30,stdin);

    	printf("Digite a idade do funcionario [%d]: ",c+1);
    	scanf("%d",&func[c].idade);
    	printf("\n");
	}
}

void ImprimeDados(FUNCIONARIO f_exibir){
	FUNCIONARIO f[tam];
	for (int  c= 0; c < tam; ++c){
		printf("\n----------------------------------");
    	printf("\nID do funcionario [%d]: %d",c+1, f[c].id);
    	printf("\nNome do funcionario [%d]: %s",c+1,f[c].nome);
    	printf("Idade do funcionario [%d]: %d",c+1,f[c].idade);
    	printf("\n----------------------------------\n");
	}
}

void ReajusteSalario(float *salario){
FUNCIONARIO func[tam];
	for (int  c= 0; c < tam; ++c){
		printf("\nDigite o Salario do funcionario [%d]: ",c+1);
    	scanf("%f",&func[c].salario);
    	func[c].salario = func[c].salario*1.1;
	}
}

void rel_salario_corrigido(FUNCIONARIO f_exibir){
    FUNCIONARIO func[tam];
	for (int  c= 0; c < tam; ++c){
		printf("\n----------------------------------");
    	printf("\nNome do funcionario [%d]: %s",c+1,func[c].nome);
    	printf("\nSalario do funcionario [%d] com Reajuste de 10%% e de: R$[%0.2f]",c+1, func[c].salario);
    	printf("\n----------------------------------\n");
	}
}

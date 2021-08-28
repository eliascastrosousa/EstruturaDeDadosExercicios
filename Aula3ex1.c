
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define tam 3

struct funcionario{
    int id;
    int idade;
    char nome[30];
};
void main(){
struct funcionario func[tam]; //func1, func2, func3, func4, func5;

for(int c=0;c<tam;c++){
    printf("\nDigite o nome do funcionario [%d]: ",c+1);
    fgets(func[c].nome,30,stdin);

    printf("Digite o ID do funcionario [%d]: ",c+1);
    scanf("%d",&func[c].id);

    printf("Digite a idade do funcionario [%d]: ",c+1);
    scanf("%d",&func[c].idade);
}
system("pause");


for(int c=0;c<tam;c++){
    printf("\n\nNome do funcionario [%d]: %s",c+1,func[c].nome);
    printf("\nID do funcionario [%d]: %d",c+1,func[c].id);
    printf("\nIdade do funcionario [%d]: %d",c+1,func[c].idade);
}

}

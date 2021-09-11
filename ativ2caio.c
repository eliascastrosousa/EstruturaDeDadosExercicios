#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, *a, *b;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &n1);
    a = &n1;
    printf("Digite o segundo valor: \n");
    scanf("%d", &n2);
    b = &n2;

    if(*a != *b){
        if(b < a){
        printf("\nO segundo endereco b(%p) e menor que o primeiro endereco a(%p).\n", b,a);
        }else{
        printf("\nO primeiro endereco a(%p) e maior que o segundo endereco b(%p).\n", a,b);
        }
        }else{
            printf("\n*a e *b possuem o mesmo valor: %d", *a);
            printf("\nOs enderecos a e b tem a mesma localizacao: %p, %p", a);
        }
    return 0;
}

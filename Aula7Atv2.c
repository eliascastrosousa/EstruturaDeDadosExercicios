#include <stdio.h>

int func(int n);

int main(){
    int n,e,s=0;

printf("Digite um numero: ");
scanf("%d",&n);

printf("Escolha o metodo de Calculo: [1] Iterativo [2] Recursivo: ");
scanf("%d",&e);

int c=n;

switch (e){
   case 1:
    for (int i = 0; i < c; ++i){
        s+=n;
        n--;
    }
     printf("\nEscolhido: Funcao Iterativa! \n");
     printf("Resultado e: %d\n\n",s);
   break;

   case 2:
    printf("\nEscolhido: Funcao Recursiva! \n");
     printf("O Resultado e: %d\n\n",func(n));
   break;

   default :
     printf ("Valor invalido!\n");
}



}

int func(int n){
    if (n == 0)
    {
        return 0;
    }
    return (n+func(n-1));
}

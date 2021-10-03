#include <stdio.h>

int fat(int n); //criação da função

int main(){
    int n=4;

    printf("O fatorial de %d e: %d",n,fat(n));

}
int fat(int n){
    if (n==1){
		return 1;
	}return n*fat(n-1);
}

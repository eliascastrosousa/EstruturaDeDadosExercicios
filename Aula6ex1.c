#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 5

	struct funcionario{
    int id; //4
    char nome[30]; //30
    int idade; //4
    float sal; //4
	};
x'
    int main(){
        printf("Struct: %d\n",sizeof(struct funcionario) );
        return 0;
    }

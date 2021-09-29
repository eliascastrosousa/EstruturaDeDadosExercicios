#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 5

	struct funcionario{
    int id; //4
    char nome[30]; //30
    int idade; //
    float sal; //8
	};

    int main(){
        printf("Struct: %d\n"s,izeof(struct funcionario) );
        return 0;
    }

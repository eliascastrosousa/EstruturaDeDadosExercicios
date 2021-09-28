#include <stdio.h>
#include <stdlib.h>
#define tam 25

    int main(){

        int *vet = NULL;
        vet = (int*) malloc(tam*sizeof(int) );

        for (int i = 0; i < tam; ++i)
        {
            vet[i] = i*2;
            printf("%d\n",vet[i] );
        }
        return 0;
    }

void funcao_troca_inteiros(int *a, int *b){
	int *aux; //ponteiro chamado aux
	aux = (int*) malloc(sizeof(int)); // auxiliar apontandoo pra um endereço de memoria com 4 bytes
	if(aux == NULL){
		printf("Memoria insuficiente!\n"); //teste para ver se o ponteiro está apontando para uma memoria valida
		exit(1); //saindo do programa
	
	}else {        //caso o contrario

		*aux = 	*a; //ponteiro de aux recebe o ponteiro de a
		*a = *b; //ponteiro de a recebe o ponteiro de a b
		*b = *aux; //ponteiro de b recebe o ponteiro de aux

		free(aux); //libera o ponteiro auxiliar 
	}
} //fim da funcao troca ponteiros




void int main(){
	char *p; //ponteiro de caractere

	p = (char*) malloc(4* sizeof(char)); // alocando n espaços memoria do tipo char 

	strcpy(p,"IFSP"); //copia a string-origem para a string- destino no caso o ponteiro p 

	p = (char*) realloc(p,15*sizeof(char)); // realocando o tamanho de espacos de char para 15

	strcat(p,"- Guarulhos"); //  A string de origem permanecerá inalterada e será anexada ao fim da string de destino.

	printf("%s", p); //mostrando o conteudo de p
	
	free(p); //liberando o ponteiro
}
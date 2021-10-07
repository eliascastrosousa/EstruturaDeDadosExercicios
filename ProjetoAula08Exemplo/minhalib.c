/*Versão iterativa*/

int func_inte(int n){
   int i = n;
	while(i >=0){
		printf("%d \n",i);
		i--;
	}
}

/*Versão Recursiva */
int func_rec(int n){
    if (n==0){
		return 0;
	}printf("%d\n",n);
	return func_rec(n-1);
}


#include <stdio.h>
#include <stdlib.h>

void int main(){
	int l=3, c=3;
	
	int matriz[3][3]; //{{1,2,3}, {4,5,6}, {7,8,9}};

	for (int i = 0; i < l; ++i)	{
		for (int j = 0; j < c; ++j){
			*(*(matriz+i)+j) = (i+1)*(j+1);
		}
	}
	for (int i = 0; i < l; ++i)	{
		for (int j = 0; j < c; ++j){
			printf("%d\t", *(*(matriz+i)+j));
		}
	}
printf("\n");
}

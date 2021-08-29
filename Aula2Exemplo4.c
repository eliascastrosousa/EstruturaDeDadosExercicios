#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int CalculaMaior(int x, int y);

int main(){

int z = CalculaMaior(100,200);
printf("Maior e: %d\n\n",z);
//return 0;
}

//funcao CalculaMaior
int CalculaMaior(int x, int y) {
if(x >y){
    return x;
}else {
    return y;
  }
}

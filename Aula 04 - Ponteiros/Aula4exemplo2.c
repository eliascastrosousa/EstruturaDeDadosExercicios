#include <stdio.h>

main(){

float x = -1.0, y;
float *p = &x;

y = (*p)+5.0;

printf("%f\n",y );
}
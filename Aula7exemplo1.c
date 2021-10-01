#include <stdio.h>
#include <string.h>

int fatorial_iterativo(int n ){
	int t, f;
	f=1;
	for (t = 1; t <= n; ++t)	{
		f = f*t;
	}
	return f;
}

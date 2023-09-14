#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int q[200];

int main( void )
{
	int i, n, *p;
	p = malloc(sizeof(int));
	scanf("%d", &n);
	for( i = 0; i < 200; ++i )
		q[i] = i;

	printf("%lx %lx %lx %lx %lx\n", (uint64_t) main, (uint64_t) q, (uint64_t) p, (uint64_t) &i, (uint64_t) scanf);

	return 0;
}

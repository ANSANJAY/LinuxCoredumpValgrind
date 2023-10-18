#include <stdio.h>

int main(void)
{
	int i;
	int *a = malloc(sizeof(int) * 12);

	if (!a) return -1; /*malloc operation has failed*/

	for (i = 0; i < 15; i++){
		a[i] = i;
	}
	free(a);
	return 0;
}

#include <stdio.h>

int main(void)
{
        int *ptr, i;
        ptr = malloc(10*sizeof(int));
        for(i = 0;i < 10;i++)
                ptr[i] = i;
        free(ptr);
        free(ptr);        /* Error: ptr has already been freed */
        return 0;
}


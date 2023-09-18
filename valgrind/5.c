#include <stdio.h>

int main(void)
{
        int *ptr;
        ptr = malloc(10);
        read(0, ptr, 100);        /* Error: unaddressable bytes */
        free(ptr);
        return 0;
}

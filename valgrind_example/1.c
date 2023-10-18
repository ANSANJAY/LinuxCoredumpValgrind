#include <stdio.h>

int main(void)
{
  char *ptr;

  /**Here we are allocating 19 bytes of memory using malloc **/
  ptr = (char *)malloc(19);

  /**Here we are again allocating 12 bytes of memory using 
   *malloc to the same pointer **/
  ptr = (char *) malloc(12);
  free(ptr);

  /**Allocating 16 bytes using malloc**/
  ptr = (char *) malloc(16);

  return 0;
}

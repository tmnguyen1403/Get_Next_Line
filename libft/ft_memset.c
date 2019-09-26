#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
  unsigned char fill;
  size_t counter;
  char *result;

  fill = (unsigned char) c;
  result = (char *) b;
  counter = 0;
  while (counter < len)
  {
    result[counter] = fill;
    ++counter;
  }
  return (b) ;
}

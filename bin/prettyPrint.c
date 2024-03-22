#ifndef PRETTY_PRINT_C
#define PRETTY_PRINT_C

#include <stdio.h>
#include "array.h"
#include "map.h"

/**
 * Pretty print the given data structure
 *
 * @param ptr Pointer to the data structure
 * @param iteration The current iteration
 *
 * @return void
 */
void prettyPrint(void *ptr, int iteration)
{
  if (ptr == NULL)
  {
    return;
  }

  if (((Array *)ptr)->type == 'a')
  {
    printf("[");

    for (int i = 0; i < ((Array *)ptr)->size; i++)
    {
      printf("%s", (char *)((Array *)ptr)->array[i]);

      if (i != ((Array *)ptr)->size - 1)
      {
        printf(", ");
      }
    }

    printf("]");
  }
  else if (((Map *)ptr)->type == 'm')
  {
    printf("{\n");

    for (int i = 0; i < ((Map *)ptr)->size; i++)
    {
      // Print 2 spaces (iteration) amount of times
      for (int j = 0; j < iteration; j++)
      {
        printf("  ");
      }

      printf("%s: ", ((Map *)ptr)->pairs[i].key);
      prettyPrint(((Map *)ptr)->pairs[i].value, iteration + 1);

      if (i != ((Map *)ptr)->size - 1)
      {
        printf(",\n");
      }
    }

    printf("\n");

    for (int j = 0; j < iteration - 1; j++)
    {
      printf("  ");
    }

    printf("}");
  }
  else
  {
    // print the int, char, string, etc. value after converting it to a string
    printf("%s", (char *)ptr);
  }
}

#endif // PRETTY_PRINT_C
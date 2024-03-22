#ifndef ARRAY_H
#define ARRAY_H

#include <stdlib.h>

/**
 * @file array.h
 *
 * @brief Array structure definition
 */
typedef struct Array
{
  char type;
  void **array;
  int size;
} Array;

#endif // ARRAY_H
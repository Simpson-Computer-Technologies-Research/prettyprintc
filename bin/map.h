#ifndef MAP_H
#define MAP_H

#include "pair.h"

/**
 * @file map.h
 *
 * @brief Map structure definition
 */
typedef struct Map
{
  char type;
  Pair *pairs;
  int size;
} Map;

#endif // MAP_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "bin/array.h"
#include "bin/map.h"
#include "bin/prettyPrint.h"

int main()
{
    Array array = {
        .type = 'a',
        .array = (void *[]){
            "Hello",
            "World",
        },
        .size = 2,
    };

    Map arrayMap = {
        .type = 'm',
        .pairs = (Pair[]){
            {.key = "data", .value = &array},
        },
        .size = 1,
    };

    Map map = {
        .type = 'm',
        .pairs = (Pair[]){
            {.key = "array", .value = &array},
            {.key = "arrayMap", .value = &arrayMap},
        },
        .size = 2,
    };

    prettyPrint(&map, 1);
    printf("\n");

    prettyPrint(&arrayMap, 1);
    printf("\n");

    prettyPrint(&array, 1);
    printf("\n");

    return 0;
}

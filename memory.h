//
// Created by michaelb on 1/12/22.
//

#ifndef CLOX_MEMORY_H
#define CLOX_MEMORY_H

#include "common.h"

#define GROW_CAPACITY(capacity) \
    ((capacity) < 8 ? 8 : (capacity) * 2)

#define GROW_ARRAY(type, pointer, oldCount, newCount) \
    (type*)reallocate(pointer, sizeof(type) * (oldCount), sizeof(type) * (newCount) \

void* reallocate(void* pointer, size_t oldSize, size_t newSize);
// right b4 reallocate function
#endif //CLOX_MEMORY_H
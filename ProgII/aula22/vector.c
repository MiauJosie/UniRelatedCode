#include "vector.h"

#include <stdlib.h>
#include <string.h>
#include <assert.h>

Vector *new_vector(unsigned elem_size)
{
    Vector *V = malloc(sizeof(Vector));
    V->elem_size = elem_size;
    V->size = 0;
    V->capacity = 1;
    V->data = malloc(elem_size);
    return V;
}

void free_vector(Vector *vec)
{
    free(vec->data);
    free(vec);
}

void *element_at(Vector *vec, unsigned pos)
{
    return (char *)vec->data + pos * vec->elem_size;
}

void pop_back(Vector *vec)
{
    assert(vec->size > 0);
    vec->size--;
}

void push_back(Vector *vec, void *x)
{
    if (vec->size == vec->capacity)
    {
        // Opa! Preciso de mais memória
        vec->capacity *= 2;
        vec->data = realloc(vec->data, vec->capacity * vec->elem_size);
    }
    void *back = element_at(vec, vec->size);
    memcpy(back, x, vec->elem_size);
    vec->size++;
}

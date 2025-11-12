#pragma once

typedef struct
{
    unsigned elem_size;
    unsigned size;
    unsigned capacity;
    void *data;
} Vector;

Vector *new_vector(unsigned elem_size);
#define VECTOR(T) new_vector(sizeof(T))

void free_vector(Vector *vec);

void *element_at(Vector *vec, unsigned pos);

void push_back(Vector *vec, void *x);

void pop_back(Vector *vec);
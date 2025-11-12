#include "queue.h"
#include "vector.h"
#include <stdlib.h>
#include <string.h>
#include <assert.h>

struct Queue
{
    Vector *V;
    int begin;
};

Queue *init_queue(int elem_size)
{
    Queue *Q = malloc(sizeof(Queue));
    Q->V = new_vector(elem_size);
    Q->begin = 0;
    return Q;
}

void free_queue(Queue *Q)
{
    free_vector(Q->V);
    free(Q);
}

bool is_empty_queue(Queue *Q)
{
    return Q->begin >= Q->V->size;
}

void *front(Queue *Q)
{
    assert(!is_empty_queue(Q));
    return element_at(Q->V, Q->begin);
}

void enqueue(Queue *Q, void *x)
{
    push_back(Q->V, x);
}

#include <stdio.h>
void dequeue(Queue *Q)
{
    // Certifica-se de que a fila não está vazia.
    assert(!is_empty_queue(Q));

    // Altera o início.
    Q->begin++;

    // Ajusta os elementos.
    int n = Q->V->size;
    int queue_size = n - Q->begin;

    if (queue_size > 0 && Q->begin >= queue_size)
    {
        void *v = Q->V->data;
        memcpy(v, front(Q), queue_size * Q->V->elem_size);
        for (int i = 0; i < n - queue_size; i++)
            pop_back(Q->V);
        Q->begin = 0;
    }
}
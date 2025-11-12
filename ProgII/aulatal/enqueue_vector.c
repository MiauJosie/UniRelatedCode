#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "vector.h"

Queue *enqueue_vector(int vector[], int deal)
{
    Queue *queue = INIT_QUEUE(int);
    for (int i = 0; i < deal; i++)
    {
        enqueue(queue, vector + i);
    }
    return queue;
}

int main()
{
    int vector[4] = {3, 5, 4, 8};
    Queue *queue = enqueue_vector(vector, 4);

    while (!is_empty_queue(queue))
    {
        int *pointer = front(queue);
        printf("%d ", *pointer);
        dequeue(queue);
    }

    free_queue(queue);

    int x = 0;
    printf("%d", x);
}
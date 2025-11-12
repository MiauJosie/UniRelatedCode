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

Queue *concat_queue(Queue *queue, Queue *other_queue)
{
    Queue *concated_queue = INIT_QUEUE(int);

    while (!is_empty_queue(queue))
    {
        int *pointer = front(queue);
        enqueue(concated_queue, pointer);
        dequeue(queue);
    }

    while (!is_empty_queue(other_queue))
    {
        int *pointer = front(other_queue);
        enqueue(concated_queue, pointer);
        dequeue(other_queue);
    }

    return concated_queue;
}

int main()
{
    int vector[4] = {3, 5, 4, 8};
    Queue *queue = enqueue_vector(vector, 4);

    int other_vector[2] = {7, 2};
    Queue *other_queue = enqueue_vector(other_vector, 2);

    Queue *concated_queue = concat_queue(queue, other_queue);

    while (!is_empty_queue(concated_queue))
    {
        int *pointer = front(concated_queue);
        printf("%d ", *pointer);
        dequeue(concated_queue);
    }
}
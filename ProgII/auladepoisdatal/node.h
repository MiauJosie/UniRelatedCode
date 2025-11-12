#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef struct Node
{
    int data;
    struct Node* next;
} Node;

Node* make_node(int data, Node* next);

void free_list(Node* head);
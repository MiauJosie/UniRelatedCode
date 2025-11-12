#include "node.h"

Node* make_node(int data, Node* next)
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = next;
    return node;
}

void free_list(Node* head)
{
    if (head)
    {
        free_list(head->next);
        free(head);
    }
}

void print_list(Node* head)
{
    if (head)
    {
        printf("[%d] -> ", head->data);
        print_list(head->next);
    }
    else
    {
        printf("\n");
    }
}

void print_even(Node* head)
{
    if (head)
    {
        if ((head->data % 2) == 0)
        {
            printf("[%d] -> ", head->data);
        }
        print_even(head->next);
    }
    else
    {
        printf("\n");
    }
}

Node* fill_nodes_random(int deal)
{
    Node* head = NULL;
    for (int i = deal; i > 0; i--)
    {
        head = make_node(rand() % 100, head);
    }
}

Node* fill_nodes_random_recursive(int deal)
{
    if (deal == 0)
    {
        return NULL;
    }
    return make_node(rand() % 100, fill_nodes_random_recursive(deal - 1));

}

Node* minor_node(Node* head)
{
    Node* minor_node = head;
    for (Node* p = head; p != NULL; p = p->next)
    {
        if (p->data < minor_node->data)
        {
            p = minor_node;
        }
    }
    return minor_node;
}

void selection_sort(Node* head)
{

}

int main()
{
    srand(time(NULL));

    Node* head = fill_nodes_random(20);
    Node* minor = minor_node(head);

    print_list(head);
    printf("%d\n", minor->data);

    free_list(head);
}
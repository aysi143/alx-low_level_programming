#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

void print_dlistint_both_ways(dlistint_t *h)
{
    dlistint_t *last = NULL;
    printf("\nTraversal in forward direction \n");
    while (h != NULL)
    {
        printf("%d\n", h->n);
        last = h;
        h = h->next;
    }

    printf("\nTraversal in reverse direction \n");
    while (last != NULL)
    {
        printf("%d\n", last->n);
        last = last->prev;
    }
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    printf("\n\n");
    printf("FIRST TEST (tail insertion)\n");
    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint_both_ways(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 8, 4096);
    print_dlistint_both_ways(head);
    free_dlistint(head);
    head = NULL;

    printf("\n\n");
    printf("SECOND TEST (empty list)\n");
    head = NULL;
    print_dlistint_both_ways(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 0, 4096);
    print_dlistint_both_ways(head);
    free_dlistint(head);
    head = NULL;

    printf("\n\n");
    printf("THIRD TEST (pos 5)\n");
    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint_both_ways(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 5, 4096);
    print_dlistint_both_ways(head);
    free_dlistint(head);
    head = NULL;

    printf("\n\n");
    printf("FOURTH TEST (10 pos)\n");
    head = NULL;
    print_dlistint_both_ways(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 10, 4096);
    print_dlistint_both_ways(head);
    free_dlistint(head);
    head = NULL;

    printf("\n\n");
    printf("FIVETH TEST (pos 0)\n");
    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint_both_ways(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 0, 4096);
    print_dlistint_both_ways(head);
    free_dlistint(head);
    head = NULL;

    printf("\n\n");
    printf("SIXTH TEST (pos 1)\n");
    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint_both_ways(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 1, 4096);
    print_dlistint_both_ways(head);
    free_dlistint(head);
    head = NULL;

    printf("\n\n");
    printf("SEVENTH TEST (pos 7)\n");
    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint_both_ways(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 7, 4096);
    print_dlistint_both_ways(head);
    free_dlistint(head);
    head = NULL;

    printf("\n\n");
    printf("EIGHTH TEST (pos 8)\n");
    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint_both_ways(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 8, 4096);
    print_dlistint_both_ways(head);
    free_dlistint(head);
    head = NULL;

    printf("\n\n");
    printf("NINETH TEST (pos 9)\n");
    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint_both_ways(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 9, 4096);
    print_dlistint_both_ways(head);
    free_dlistint(head);
    head = NULL;

    printf("\n\n");
    printf("NINETH TEST (pos 15)\n");
    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint_both_ways(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 15, 4096);
    print_dlistint_both_ways(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}

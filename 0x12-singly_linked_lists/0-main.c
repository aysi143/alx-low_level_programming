#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
/*Pointers: head and new pointing to type of variable list_t (struct)*/
    list_t *head;
    list_t *new;
/*Variale list_t hello is filled with "World" 5 and NULL. NO mem still*/
    list_t hello = {"World", 5, NULL};
/*Declared variable 'n' for storing return value of aoumt of node*/
    size_t n;

/*Pointer 'head' now pointing to hello, now 'head' has 'hello' values*/
    head = &hello;
/*Allocatinng memory for the struct list_t*/
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
/*Accessing 'new' struc values for 'str' -> "Hello*/
    new->str = strdup("Hello");
/*Accessing 'new' struct values for 'len' -> 5 */
    new->len = 5;
/*Accessing 'new' struct values for 'next' -> head*/
/*so new is pointing to next position, it's 'head'*/
/*We got "Hello" as 'new' is pointing to 'head', and "World" because next is 'head'*/
    new->next = head;
/*now 'head' is equals to the 'new' pointed space in memory"*/
    head = new;
/*'n' stores the amount of node return value*/
    n = print_list(head);
/*Printing unsigned long amount of nodes*/
    printf("-> %lu elements\n", n);

    printf("\n");
/*Liberate space in memory for 'news' 'str' value*/
    free(new->str);
/*Accessing 'new' struct value for 'str' now is NULL*/
    new->str = NULL;
/*'n' stores the maount of node return value*/
    n = print_list(head);
/*Printing unsigned long amount of nodes*/
    printf("-> %lu elements\n", n);

/*Liberating all space in memory of strings and structs*/
    free(new);
    return (0);
}

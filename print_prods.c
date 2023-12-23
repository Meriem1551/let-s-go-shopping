#include "main.h"

/**
 * print_products - print the purchased products
 * @h: pointre to the root of the tree
 * Return: void
 */

void print_products(product *h)
{
    product *tmp;

    if (h == NULL)
        return;
    tmp = h;
    printf("The purchased products are: \n");
    while (tmp != NULL)
    {
        printf("%s\n", tmp->designation);
        tmp = tmp->next;
    }
}